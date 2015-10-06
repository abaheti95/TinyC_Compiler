#include <stdio.h>
#include "mylib.h"

#define MAXN 		 100000

//This is a test file and here is a single line comment
/*
	according to the rules 0 is not an integer constant
	so any appearance of 0 will be outputted directly
	
	A warining arises after make which is for the enumeration constant
	That warning is coming because enumeration_constant is directly assigned as identifier
	so the warning says rule cannot be matched
	This code cannot distinguish between enumeration_constant and identifier

	the test file has lots of spaces in between to test the robustness of the code

	after make the output is to be tested by ./a.out < testfile.c
	the make file as already contains the executing command
	so output of the test file will be directly printed after make
*/
typedef struct node
{
	int val;
	struct node* next;
}node;

union F
{
	int F1;
	int* F2;
}

extern double outside;
inline int max(int &a,int &b)
{return (a<b)?b:a;}

static int main(int argc, char const *argv[])
{
	auto int a;
	scanf("%d",&a);
	switch(a)
	{
		case 0: printf("0");break;
		case 1: break;
		default:
			/* Do nothing */
	}
	putchar('\n');
	const char*s123;
	int G[100];

	for(int i=0 	;	i< 10 ; i++	)
		continue;
	int iterator=10;
	do
	{
		--iterator;
	}while(iterator > 0);


	float f1 = -1234.134e21;
	float f2 = +12.12;
	float f3 = .56;
	float f4 = 		-658;
	f1=f2+f3;f3 = 		f1/f2;
	a %= 10;
	a+=30;

	goto(55);

	unsigned long long int b = ~10;
	register char ch = 'a';
	short val = 10%4;

	_Bool ha;
	_Complex hb,hc;
	_Imaginary hb1;

	node *root = (node*)malloc(sizeof(node));
	root->next = NULL;
	root-> val =a;
	a = !((a>>1)|(a<<1)&a);

	if(a<0 || a==0 && f1 >= 0.0)
	{


		a = 0;
	}
	else if( f1!=0.0)
		a++;

	b^=b;

	return 0;
}

void something(int m,...)
{}