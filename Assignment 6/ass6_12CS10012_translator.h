#ifndef __ASS6_12CS10012_TRANSLATOR_H
#define __ASS6_12CS10012_TRANSLATOR_H

#include <stdio.h>
#include <vector>
#include <set>
#include <cstdlib>
#include <string>

using namespace std;

const size_t size_of_int = 4, size_of_double = 8,
size_of_char = 1, size_of_bool = 1, size_of_ptr = 4;
extern vector<string> strs;

class SymbolTable;

enum typeEnum
{
	t_VOID = 0,
	t_BOOL,
	t_CHAR,
	t_INT,
	t_DOUBLE,
	t_PTR,
	t_ARRAY,
	t_FUNC
};

union typeUnion
{
	int ival;
	double dval;
	char cval;
};


struct typeNode
{
	typeEnum baseType;
	int size;
	typeNode *next;

	typeNode(typeEnum t, int s = 1, typeNode *n = NULL);
	size_t getSize();
	void print();
};

typeNode *CopyType(typeNode *t); 	// function to copy the type


// global variables for the grammar
extern typeNode *t;			// to store the type as a global variable, inherited attribute
extern unsigned int w;		// to store the type width as a global variable, inherited attribute
extern int nextinstr;		// global variable to store the index of the next instruction
extern int tempcount;		// to count the temporary variables

// symbol table entry
struct symtabelem
{
	/* this is a sturcture for a single entry in symbol table
	thus it is named as symtabelem which stands for "symbol table element"*/
	string name;						// string for storing the name of the variable
	typeNode* type;						// typeNode for storing the type of the variable
	typeUnion initialValue;				// to store the initial value of the variable
	unsigned int size;					// Size of the variable
	unsigned int offset;				// Offset of the variable in its symbol table
	SymbolTable *nestedTable;			// A pointer to the nestedtable for the current variable
	//In every function variable this variable remains null
	//It is initialized for only the members of global sybmol table
	string var_type;					// this is for storing the type of vairable ex: "local" "param" "func" "return"
	bool isInitialized;					// Boolean value to store whether a variable is initialized or not

	symtabelem(string Name = "");		// Constructor of this class
};

class SymbolTable
{
	/* SymbolTable is just a vector of symboltableelements
	Along with the symbol table it also keeps offset variable which is frequently used in offset calculation of local variables
	It also stores the name of the symbol table seperately
	*/
public:
	vector<symtabelem*> table;			// Actual table is in the vector format
	string name;						// name of the symbol table
	int offset;							// Offset variable

	int start_quad;						// Starting quad index of the function
	int end_quad;						// Ending quad index of the function
	set<int> gotos;					// Vector of quad indexes which have gotos
	
	SymbolTable();						// class constructor
	~SymbolTable();						// class destructor
	symtabelem * lookup(string name);	// Lookup function searches the variable with name. If the variable is present then returns its pointer location else creates a new entry with its name and returns that pointer
	symtabelem * search(string name);	// Search just searches the variable with name in symbol table and returns its pointer if present
	symtabelem * gentemp(typeNode *type);	// gentemp creates a new temporary in the symbol table with the provided type
	void update(symtabelem *loc, typeNode *type, typeUnion initval, SymbolTable *next = NULL);	// Update function updates the row values of a symboltableelement
	void print();						// prints the complete symboltable

	/*Target Code generation functions*/
	void get_gotos();					// Function that populates the gotos vector with quad indexes
	void set_activation_offsets();		// Change the offsets of the variables in the Symbol Table
	void generate_prologue(FILE *fp);	// Generates Porlogue of the function
	void print_internal_code(FILE *fp);	// Function that prints assembly code of quads
	void generate_epilogue(FILE *fp);	// Generates Epilogue of the function

};

// structure for maintaining list
typedef struct list
{
	/*This is just a normal integer linked list. Used in nextlist truelist and falselist to store the quad indexes*/
	int index;
	struct list *next;
}list;

// structure for attributes of expression
struct expStruct
{
	/*Structure for general expression
	*/
	symtabelem *loc;					// stores the pointer to the concerned variable in the symboltable
	symtabelem *array;					// stores the base address of the array if the expression is of type array
	typeNode *type;						// stores the type of the expression
	list *truelist;						// truelist of the designated expression
	list *falselist;					// falselist of the designated expression
	bool isPointer;						// Boolean flag for storing if the current expression is a pointer
	bool isString;						// Boolean flag for storing if the current expression is a string
	int strid;							// Index of the string
	symtabelem *poss_array;					// stores the base address of the array if the expression is of type array
};

// sturcture for argument expression list
struct arglistStruct
{
	vector<expStruct*> *arguments;		// A simple vector is used to store the locations of all seen arguments
};

// struct for declaration grammar
struct decStruct
{
	typeNode *type;						// type of the current declaration
	unsigned int width;					// width of the variable
};

// struct for a identifier
struct idStruct
{
	symtabelem *loc;					// pointer to the symboltable
	string *name;						// name of the identifier
};


// Class quad
enum opcodeType
{
	/*Simple enumeration of all the availabe quad operators
	*/
	o_PLUS = 1,
	o_MINUS,
	o_MULT,
	o_DIV,
	o_MOD,
	o_UMINUS,
	o_COPY,
	o_PARAM,
	o_GOTO,
	o_CALL,
	o_JLT,
	o_JLE,
	o_JGT,
	o_JGE,
	o_JE,
	o_JNE,
	o_JT,
	o_JF,
	o_INT2DBL,
	o_DBL2INT,
	o_CHAR2INT,
	o_INT2CHAR,
	o_LDEREF,
	o_RDEREF,
	o_ADDR,
	o_RINDEX,
	o_LINDEX,
	o_RET,
	o_SHL,
	o_SHR,
	o_BAND,
	o_BOR,
	o_BXOR,
	o_BNOT
};


// struct for a quad array element
struct quadelem
{
	/*A quad element consists of 3 strings namely for arg1, arg2 and result and an operator enum for storing the opcode*/
	opcodeType op;
	string arg1, arg2, result;

	quadelem(opcodeType, string, string, string);	// class parameterised constructor
};

class Quad
{
	/*Quad class is just collection of quads. So for the collection we use vectors of c++*/
public:
	vector<quadelem> quadarray;

	Quad();

	void emit(opcodeType op, string s1 = "", string s2 = "",  string s3 = "");	//emit used for general operations with 3 inputs
	void emit(opcodeType op, int x, string s2 = "");							// emit used for assign type and instruction dealing with direct integer
	void emit(opcodeType op, double x, string s2 = "");							// direct double value
	void emit(opcodeType op, char x, string s2 = "");							// direct char value

	void print();						// prints all of the quads

};

extern SymbolTable *globalST;			// A global symbol table pointer
// this is basically for storing the function headers in our case
extern SymbolTable *currST;				// A current symbol table pointer
// this is a dynamic symboltable which changes throught the compilation process. All the local and temporary variables are added to this table
extern Quad quad;						// variable of the Quad class which will finally store all the quads

// global function declarations
list *makelist(int i);					// Creates a single entity list with i as the only quadindex in it
list *merge(list *p1, list *p2);		// Merges the two lists p1 and p2 and return the pointer to the merged list
void backpatch(list *p, int i);			// Assign the quadindex i to all the dangling goto's in the list and deletes the list
void typecheck(expStruct *e1, expStruct *e2, bool isAssign = false);	// Checks and changes the type of the two input expression structures
void conv2Bool(expStruct *e);			// Converts the input expression to boolean if not already a boolean
typeNode *CopyType(typeNode *t);		// Duplicates the input type and returns the pointer to the newly created typeNode
void print_list(list* root);			// Helper function to print the list of the dangling goto's
// Used only in debugging
#endif
