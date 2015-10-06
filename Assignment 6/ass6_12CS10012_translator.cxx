#include "ass6_12CS10012_translator.h"
#include "y.tab.h"

int tempcount = 0;						// Global counter for keeping the count of temporaries
typeNode *t;							// Global typeNode pointer used in the declaration grammar
unsigned int w;							// Global width variable again used in the declaration grammar
int nextinstr;							// Global variable used as quad index counter
SymbolTable *globalST = new SymbolTable();	// global symbol table initialized
SymbolTable *currST = new SymbolTable();	// current symbol table initialized
// both symbol tables are initialized at the beginning of the progaram
Quad quad;								// variable that stores the final quads
vector<string> strs;

// function to copy the type
typeNode *CopyType(typeNode *t)
{
	/*Duplicates the input type and returns the pointer to the newly created type*/
	if(t == NULL) return t;
	typeNode *ret = new typeNode(t->baseType);

	ret->size = t->size;
	ret->baseType = t->baseType;

	ret->next = CopyType(t->next);
	return ret;
}


// function to get the size of any type
size_t typeNode::getSize()
{
	/*Returns ths size of the current typeNode
	Recursively calculates type for arrays*/
	if(this == NULL)
		return 0;
	if(baseType == t_ARRAY)
		return size * this->next->getSize();

	switch(baseType)
	{
		case t_VOID: 	return 0;
		case t_INT: 	return size_of_int;
		case t_DOUBLE:	return size_of_double;
		case t_CHAR: 	return size_of_char;
		case t_BOOL: 	return size_of_bool;
		case t_PTR: 	return size_of_ptr;
		default: 		return 0;
	}
}


// function to print any type
void typeNode::print()
{
	/*Prints the type of the typeNode
	Recursively prints for arrays and pointers*/
	switch(baseType)
	{
		case t_VOID:
			printf("void");
			break;
		case t_INT:
			printf("int");
			break;
		case t_DOUBLE:
			printf("double");
			break;
		case t_CHAR:
			printf("char");
			break;
		case t_BOOL:
			printf("bool");
			break;
		case t_ARRAY:
			printf("array(%d, ", size);
			if(this->next !=NULL)
			next->print();
			printf(")");
			break;
		case t_PTR:
			printf("ptr(");
			if(this->next !=NULL)
			this->next->print();
			printf(")");
			break;
		case t_FUNC:
			printf("function");
			break;
		default:
			printf("TYPE NOT FOUND\n");
			exit(-1);
	}
}


typeNode::typeNode(typeEnum t, int s, typeNode *n)
:baseType(t), size(s), next(n)
{}

// constructor of symbol table element
symtabelem::symtabelem(string Name)
:name(Name), type(NULL), size(0), offset(-1), var_type(""), isInitialized(false), nestedTable(NULL)
{}


// constructor of symboltable class
SymbolTable::SymbolTable()
{
	offset = 0;				// initializing offset = 0 for every symbol table
	name = "";				// initially no name
}

// destructor of symboltable class
SymbolTable::~SymbolTable()
{
	//Delete all the types of the symbol table before deleting the table itself
	for(int i = 0; i < table.size(); i++)
	{
		typeNode *temp1 = table[i]->type;
		typeNode *temp2;
		while(temp1 != NULL)
		{
			temp2 = temp1;
			temp1 = temp1 -> next;
			delete temp2;
		}
	}
}

symtabelem *SymbolTable::lookup(string name)
{
	//brute force searhing for the input name in the table
	for(int i = 0; i < table.size(); i++)
	{
		if(table[i]->name == name)
			return table[i];
	}
	//If name not present create a new element, insert it in the table and return the pointer to the newly created entity
	symtabelem * new_elem = new symtabelem(name);
	new_elem->initialValue.ival = 0;
	table.push_back(new_elem);
	return table[table.size() - 1];
}

symtabelem *SymbolTable::search(string name)
{
	/*Simple burte force search*/
	for(int i = 0; i < table.size(); i++)
	{
		if(table[i]->name == name)
			return table[i];
	}
	return NULL;
}

void SymbolTable::update(symtabelem *loc, typeNode *type, typeUnion initval, SymbolTable *next)
{
	/*Updates the given location in the sybol table with given parameters*/
	loc->type = CopyType(type);
	loc->initialValue = initval;
	loc->size = loc->type->getSize();
	loc->offset = offset;
	offset = offset + (loc->size);
	loc->nestedTable = next; 
	loc->isInitialized = true;
}

symtabelem *SymbolTable::gentemp(typeNode *type)
{
	/*Generates a new temporary variable and stores that in the symboltable*/
	char name[4];
	sprintf(name, "t%03d", tempcount++);
	symtabelem * temp = lookup(name);
	temp->var_type = "temp";
	temp->type = type;
	temp->offset = offset;
	temp->size = type->getSize();
	offset = offset + (temp->size);
	return temp;
}

void SymbolTable::print()
{
	/*Function that prints the symbol table*/
	printf("Symbol Table : %s\n",name.c_str());
	printf("Offset = %d\nStart Quad Index = %d\nEnd Quad Index =  %d\n",offset,start_quad,end_quad);
	for(int i = 0; i < table.size(); i++)
	{
		printf("%s\t", table[i]->name.c_str());
		if(table[i]->isInitialized)
		{
			if(table[i]->type->baseType == t_INT)
				printf("%04d\t", table[i]->initialValue.ival);
			else if(table[i]->type->baseType == t_DOUBLE)
				printf("%.3lf\t", table[i]->initialValue.dval);
			else if(table[i]->type->baseType == t_CHAR)
				printf("   %c\t", table[i]->initialValue.cval);
			else printf("----\t");
		}
		else
			printf("null\t");
		printf("%s\t%d\t%d\t",table[i]->var_type.c_str(),table[i]->size, table[i]->offset);
		if(table[i]->var_type == "func")
			printf("ptr-to-ST(%s)", table[i]->nestedTable->name.c_str());

		if(table[i]->type != NULL)
			table[i]->type->print();
		printf("\n");
	}
	printf("\n");
}

quadelem::quadelem(opcodeType o, string a1, string a2, string r)
:op(o), arg1(a1), arg2(a2), result(r)
{}



Quad::Quad()
{
	nextinstr = 0;	// When the quad is created then the global nextinstruction counter is set to 0
}


// send all the arguements after doing strdup on them
void Quad::emit(opcodeType op, string s1, string s2, string s3)
{
	if(s3.size())
	{
		quadelem new_quad(op, s1, s2, s3);
		quadarray.push_back(new_quad);
	}
	else if(s2.size())
	{
		quadelem new_quad(op, s1, "", s2);
		quadarray.push_back(new_quad);
	}	
	else if(s1.size())
	{
		quadelem new_quad(op, "", "", s1);
		quadarray.push_back(new_quad);
	}
	else
	{
		quadelem new_quad(op, "", "", "");
		quadarray.push_back(new_quad);
	}
	nextinstr++;
}

void Quad::emit(opcodeType op, int x, string s2)
{
	char temp[15];
	sprintf(temp, "%d", x);
	if(s2.size())
	{
		quadelem new_quad(op, temp, "", s2);
		quadarray.push_back(new_quad);
	}
	else
	{
		quadelem new_quad(op, "", "", temp);
		quadarray.push_back(new_quad);
	}
	nextinstr++;
}

void Quad::emit(opcodeType op, double x, string s2)
{
	char temp[15];
	sprintf(temp, "%lf", x);
	if(s2.size())
	{
		quadelem new_quad(op, temp, "", s2);
		quadarray.push_back(new_quad);
	}
	else
	{
		quadelem new_quad(op, "", "", temp);
		quadarray.push_back(new_quad);
	}
	nextinstr++;
}

void Quad::emit(opcodeType op, char x, string s2)
{
	char temp[15];
	sprintf(temp, "'%c'", x);
	if(s2.size())
	{
		quadelem new_quad(op, temp, "", s2);
		quadarray.push_back(new_quad);
	}
	else
	{
		quadelem new_quad(op, "", "", temp);
		quadarray.push_back(new_quad);
	}
	nextinstr++;
}

void Quad::print()
{
	/*Function that prints all the quads*/
	opcodeType opx;
	string resx, arg1x, arg2x;

	for(int i = 0; i < nextinstr; i++)
	{
		opx = quadarray[i].op;
		resx = quadarray[i].result;
		arg1x = quadarray[i].arg1;
		arg2x = quadarray[i].arg2;
		printf("%3d. :",i);
		switch(opx)
		{
			case o_PLUS:
				printf("%s\t=\t%s\t+\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_MINUS:
				printf("%s\t=\t%s\t-\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_MULT:
				printf("%s\t=\t%s\t*\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_DIV:
				printf("%s\t=\t%s\t/\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_UMINUS:
				printf("%s\t=\t- %s\n", resx.c_str(), arg1x.c_str());
				break;
			case o_COPY:
				printf("%s\t=\t%s\n", resx.c_str(), arg1x.c_str());
				break;
			case o_PARAM:
				printf("param\t%s\n", resx.c_str());
				break;
			case o_GOTO:
				printf("goto\t%s\n", resx.c_str());
				break;
			case o_CALL:
				if(!resx.c_str())
					printf("call %s, %s\n", arg1x.c_str(), arg2x.c_str());
				else
					printf("%s\t=\tcall %s, %s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_JLT:
				printf("if %s\t<\t%s\tgoto\t%s\n", arg1x.c_str(), arg2x.c_str(), resx.c_str());
				break;
			case o_JLE:
				printf("if %s\t<=\t%s\tgoto\t%s\n", arg1x.c_str(), arg2x.c_str(), resx.c_str());
				break;
			case o_JGT:
				printf("if %s\t>\t%s\tgoto\t%s\n", arg1x.c_str(), arg2x.c_str(), resx.c_str());
				break;
			case o_JGE:
				printf("if %s\t>=\t%s\tgoto\t%s\n", arg1x.c_str(), arg2x.c_str(), resx.c_str());
				break;
			case o_JE:
				printf("if %s\t==\t%s\tgoto\t%s\n", arg1x.c_str(), arg2x.c_str(), resx.c_str());
				break;
			case o_JNE:
				printf("if %s\t!=\t%s\tgoto\t%s\n", arg1x.c_str(), arg2x.c_str(), resx.c_str());
				break;
			case o_JT:
				printf("if %s\tgoto\t%s\n", arg1x.c_str(), resx.c_str());
				break;
			case o_JF:
				printf("ifFalse\t%s\tgoto\t%s\n", arg1x.c_str(), resx.c_str());
				break;
			case o_INT2DBL:
				printf("%s\t=\tint2dbl(%s)\n", resx.c_str(), arg1x.c_str());
				break;
			case o_DBL2INT:
				printf("%s\t=\tdbl2int(%s)\n", resx.c_str(), arg1x.c_str());
				break;
			case o_CHAR2INT:
				printf("%s\t=\tchar2int(%s)\n", resx.c_str(), arg1x.c_str());
				break;
			case o_INT2CHAR:
				printf("%s\t=\tint2char(%s)\n", resx.c_str(), arg1x.c_str());
				break;
			case o_MOD:
				printf("%s\t=\t%s\t%%\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_LDEREF:
				printf("*%s\t=\t%s\n", resx.c_str(), arg1x.c_str());
				break;
			case o_RDEREF:
				printf("%s\t=\t* %s\n", resx.c_str(), arg1x.c_str());
				break;
			case o_ADDR:
				printf("%s\t=\t& %s\n", resx.c_str(), arg1x.c_str());
				break;
			case o_RINDEX:
				printf("%s\t=\t%s[%s]\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_LINDEX:
				printf("%s[%s]\t=\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_RET:
				if(!resx.size())
					printf("return\n");
				else 
					printf("return\t%s\n", resx.c_str());
				break;
			case o_SHL:
				printf("%s\t=\t%s\t<<\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_SHR:
				printf("%s\t=\t%s\t>>\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_BAND:
				printf("%s\t=\t%s\t&\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_BOR:
				printf("%s\t=\t%s\t|\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_BXOR:
				printf("%s\t=\t%s\t^\t%s\n", resx.c_str(), arg1x.c_str(), arg2x.c_str());
				break;
			case o_BNOT:
				printf("%s\t=\t~ %s\n", resx.c_str(), arg1x.c_str());
				break;
			default:
				printf("ERROR: OPCODE NOT FOUND!\n");
				exit(-1);
		}
	}
}



list *makelist(int i)
{
	/*Creates a list with single list entry*/
	list *l = (list *)malloc(sizeof(list));
	l->index = i;
	l->next = NULL;
	return l;
}

list *merge(list *p1, list *p2)
{
	/*Merges the two list and returns the pointer of the merged list*/
	if(p1 == NULL)
		return p2;
	if(p2 == NULL)
		return p1;
	list *temp = p1;
	while(temp!= NULL && temp -> next != NULL)
		temp = temp -> next;
	temp -> next = p2;
	return p1;
}

void backpatch(list *p, int i)
{
	list *temp1 = p, *temp2;
	char line_no[10];
	sprintf(line_no, "%d", i);
	while(temp1 != NULL)
	{
		quad.quadarray[temp1->index].result = line_no;
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
}

void typecheck(expStruct *e1, expStruct *e2, bool isAssign)
{
	//printf("Idhar!!%s %s\n",e1->loc->name.c_str(),e2->loc->name.c_str());
	if(e1->type->baseType == e2->type->baseType || (e1->type->baseType == t_PTR && e2->type->baseType == t_INT))
		return;

	symtabelem *temp;

	if(isAssign)
	{
		temp = currST->gentemp(e1->type);
		if(e1->type->baseType == t_INT && e2->type->baseType == t_DOUBLE)
			quad.emit(o_DBL2INT, e2->loc->name, temp->name);
		else if(e1->type->baseType == t_DOUBLE && e2->type->baseType == t_INT)
			quad.emit(o_INT2DBL, e2->loc->name, temp->name);
		else if(e1->type->baseType == t_CHAR && e2->type->baseType == t_INT)
			quad.emit(o_INT2CHAR, e2->loc->name, temp->name);
		else if(e1->type->baseType == t_INT && e2->type->baseType == t_CHAR)
			quad.emit(o_CHAR2INT, e2->loc->name, temp->name);
		else
		{
			printf("%s %s ERROR: INCOMPATIBLE TYPES\n",e1->loc->name.c_str(),e2->loc->name.c_str());
			exit(-1);
		}
		e2->loc = temp;
		e2->type = temp->type;
	}
	else 
	{
		if(e1->type->baseType > e2->type->baseType)
		{
			temp = currST->gentemp(e1->type);
			if(e1->type->baseType == t_INT && e2->type->baseType == t_CHAR)
				quad.emit(o_CHAR2INT, e2->loc->name, temp->name);
			else if(e1->type->baseType == t_DOUBLE && e2->type->baseType == t_INT)
				quad.emit(o_INT2DBL, e2->loc->name, temp->name);
			e2->loc = temp;
			e2->type = temp->type;
		}
		else
		{
			temp = currST->gentemp(e2->type);
			if(e2->type->baseType == t_INT && e1->type->baseType == t_CHAR)
				quad.emit(o_CHAR2INT, e1->loc->name, temp->name);
			else if(e2->type->baseType == t_DOUBLE && e1->type->baseType == t_INT)
				quad.emit(o_INT2DBL, e1->loc->name, temp->name);	
			e1->loc = temp;
			e1->type = temp->type;
		}
		// else {
		// printf("ERROR: INCOMPATIBLE TYPES\n");
		// exit(-1);
		// }
	}
}

void conv2Bool(expStruct *e)
{
	// Converts the expression to bool if not already a bool
	if(e->type->baseType != t_BOOL)
	{
		e->type = new typeNode(t_BOOL);
		e->falselist = makelist(nextinstr);
		quad.emit(o_JE, e->loc->name, "0","-1");
		e->truelist = makelist(nextinstr);
		quad.emit(o_GOTO, -1);
	}
}

void print_list(list* root)
{
	if(root == NULL)
	{
		printf("Empty List!\n");
		return;
	}
	while(root->next != NULL)
	{
		printf("%d ",root->index);
		root = root->next;
	}
	printf("%d\n",root->index);
}

int main()
{
	//yydebug = 1;
	FILE *fp;
	globalST->name = "global";
	yyparse();
	printf("Quads for the given program\n");
	quad.print();
	printf("SymbolTables for the given program\n");
	globalST->print();
	
	fp = fopen("output.s","w");
	fprintf(fp,"\t.file\t\"output.s\"\n");
	//Print the data of the strings here
	for (int i = 0; i < strs.size(); ++i)
	{
		fprintf(fp,".STR%d:\t.string %s\n",i,strs[i].c_str());	
	}
	for (int i = 0; i < globalST->table.size(); ++i)
	{
		globalST->table[i]->nestedTable->print();
		globalST->table[i]->nestedTable->get_gotos();
		globalST->table[i]->nestedTable->set_activation_offsets();
		globalST->table[i]->nestedTable->print();
		globalST->table[i]->nestedTable->generate_prologue(fp);
		globalST->table[i]->nestedTable->print_internal_code(fp);
	}
	return 0;
}
