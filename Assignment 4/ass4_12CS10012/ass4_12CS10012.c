#include <stdio.h>
#include "y.tab.h"

extern int yydebug;
int main()
{
	//yydebug = 1;
	yyparse();
	return 0;
}
