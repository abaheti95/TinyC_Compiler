#include "myl.h"

int main()
{
	float x;
	int y;
	prints("Enter a floating point number :");
	if(!readf(&x))
		printd(x);
	else
		prints("Invalid floating point number!");
	prints("\nEnter an integer :");
	if(!readi(&y))
		printi(y);
	else
		prints("Invalid integer!");
	prints("\n");
	return 0;
}