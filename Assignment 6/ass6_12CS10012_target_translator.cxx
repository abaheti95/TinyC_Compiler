#include "ass6_12CS10012_translator.h"
#include "y.tab.h"

extern Quad quad;
void SymbolTable::get_gotos()
{
	//Traverse in all the quads and add all the gotos
	int i;
	for(i = start_quad;i <= end_quad; i++)
	{
		if(quad.quadarray[i].op == o_GOTO || (quad.quadarray[i].op >= o_JLT && quad.quadarray[i].op <= o_JNE) )
		{
			//simple GOTO or Relational Operators
			gotos.insert(atoi(quad.quadarray[i].result.c_str()));
		}
	}
}
void SymbolTable::set_activation_offsets()
{
	//offsets of Parameters and the local variables are to be changed here
	int i,pos,param_size=0;
	for(i=1;i<table.size() && table[i]->var_type == "param";i++)
	{
		// Scan and add sizes of all the parameters
		param_size += table[i]->size;
	}
	//change the offsets of the rest of the variables
	printf("Param Size=%d\n",param_size);
	pos = i;
	for(;i<table.size();i++)
	{
		//Local Variables
		table[i]->offset = param_size - table[i]->size - table[i]->offset - 4;
	}
	for(i=1;i<pos;i++)
	{
		//Params
		table[i]->offset = param_size - table[i]->offset + table[0]->size + 4;
	}
	//Global Offset
	offset = offset - param_size - table[0]->size + 12;
}

void SymbolTable::generate_prologue(FILE *fp)
{
	fprintf(fp,"\t.text\n\t.globl\t%s\n\t.type\t%s, @function\n",name.c_str(),name.c_str());
	//print label
	fprintf(fp,"%s:\n",name.c_str());
	//Push ebp and shift current esp to ebp
	fprintf(fp,"\tpushl\t%%ebp\n\tmovl\t%%esp, %%ebp\t\n");
	//Create space for the local variables
	fprintf(fp,"\tsubl\t$%d, %%esp\n",offset);
}

void SymbolTable::print_internal_code(FILE *fp)
{
	/*Get quads one by one and start printng their assembly output*/
	int i;				// Variable for iterating between the function quads
	/*Assign all arrays with their address locations*/
	/*for(i = 1;i < table.size();i++)
	{
		if(table[i]->type!= NULL && table[i]->type->baseType == t_ARRAY)
		{
			fprintf(fp,"#;Array : %s\n",table[i]->name.c_str());
			fprintf(fp,"\tleal\t%d(%%ebp), %%eax\n",table[i]->offset);
			fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",table[i]->offset);
		}
	}*/
	/*Get Quad one by one and then start printing their assembly code*/
	for(i = start_quad; i <= end_quad; i++)
	{
		opcodeType &opx = quad.quadarray[i].op;
		string &arg1x = quad.quadarray[i].arg1;
		string &arg2x = quad.quadarray[i].arg2;
		string &resx = quad.quadarray[i].result;
		int offr,off1,off2;
		fprintf(fp,"#; %d:",i);
		if(search(resx))
		{
			offr = search(resx)->offset;
			fprintf(fp,"res = %s ",search(resx)->name.c_str());
		}
		if(search(arg1x))
		{
			off1 = search(arg1x)->offset;
			fprintf(fp,"arg1 = %s ",search(arg1x)->name.c_str());
		}
		if(search(arg2x))
		{
			off2 = search(arg2x)->offset;
			fprintf(fp,"arg2 = %s ",search(arg2x)->name.c_str());
		}
		fprintf(fp,"\n");
		if(gotos.find(i)!=gotos.end())
		{
			//Generate Label here
			fprintf(fp,".L%d:\n",i);
		}
		switch(opx)
		{
			case o_PLUS:
				// Copy values in eax and edx, add both of them to eax then move it to destination
				fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
				if(arg2x[0]>='0' && arg2x[0]<='9')
					fprintf(fp,"\tmovl\t$%s, %%edx\n",arg2x.c_str());
				else
					fprintf(fp,"\tmovl\t%d(%%ebp), %%edx\n",off2);
				fprintf(fp,"\taddl\t%%edx, %%eax\n");
				fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				break;
			case o_MINUS:
				if(search(resx)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%edx\n",off2);
					fprintf(fp,"\tsubl\t%%edx, %%eax\n");
					fprintf(fp,"\tmovb\t%%al, %d(%%ebp)\n",offr);
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
					// Direct Number access
					if(arg2x[0]>='0' && arg2x[0]<='9')
						fprintf(fp,"\tmovl\t$%s, %%edx\n",arg2x.c_str());
					else
						fprintf(fp,"\tmovl\t%d(%%ebp), %%edx\n",off2);
					fprintf(fp,"\tsubl\t%%edx, %%eax\n");
					fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				}
				break;
			case o_MULT:
				fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
				if(arg2x[0]>='0' && arg2x[0]<='9')
				{
					fprintf(fp,"\tmovl\t$%s, %%ecx\n",arg2x.c_str());
					fprintf(fp,"\timull\t%%ecx\n");
				}
				else
					fprintf(fp,"\timull\t%d(%%ebp), %%eax\n",off2);
				fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				break;
			case o_DIV:
				fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
				fprintf(fp,"\tcltd\n");
				fprintf(fp,"\tidivl\t%d(%%ebp), %%eax\n",off2);
				fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				break;
			case o_MOD:
				fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
				fprintf(fp,"\tcltd\n");
				fprintf(fp,"\tidivl\t%d(%%ebp), %%eax\n",off2);
				fprintf(fp,"\tmovl\t%%edx, %d(%%ebp)\n",offr);
				break;
			case o_UMINUS:
				fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
				fprintf(fp,"\tnegl\t%%eax\n");
				fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				break;
			case o_COPY:
				//Check if the second argument is a constant
				if(arg1x[0]>='0' && arg1x[0]<='9')	//first character is number
				{
					fprintf(fp,"\tmovl\t$%s, %d(%%ebp)\n",arg1x.c_str(),offr);
				}
				else if(arg1x[0] == '\'')
				{
					//Character
					fprintf(fp,"\tmovb\t$%d, %d(%%ebp)\n",(int)arg1x[1],offr);
				}
				else if(search(resx)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tmovb\t%%al, %d(%%ebp)\n",offr);
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				}
				break;
			case o_PARAM:
				if(resx[0] == '_')
				{
					//string
					char* temp = (char*)resx.c_str();
					fprintf(fp,"\tmovl\t$.STR%d,\t(%%esp)\n",atoi(temp+1));
				}
				else if(search(resx)->type->baseType == t_ARRAY)
				{
					//Array
					fprintf(fp,"\tleal\t%d(%%ebp), %%eax\n",offr);
					fprintf(fp,"\tpushl\t%%eax\n");
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",offr);
					fprintf(fp,"\tpushl\t%%eax\n");
				}
				break;
			case o_GOTO:
				fprintf(fp,"\tjmp .L%s\n",resx.c_str());
				break;
			case o_CALL:
				fprintf(fp,"\tcall\t%s\n",arg1x.c_str());
				fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				break;
			// If and GOTO
			case o_JLT:
				if(search(arg1x)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tcmpb\t%d(%%ebp), %%al\n",off2);
					fprintf(fp,"\tjl .L%s\n",resx.c_str());
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tmovl\t%d(%%ebp), %%edx\n",off2);
					fprintf(fp,"\tcmpl\t%%edx, %%eax\n");
					fprintf(fp,"\tjl .L%s\n",resx.c_str());
				}
				break;
			case o_JLE:
				if(search(arg1x)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tcmpb\t%d(%%ebp), %%al\n",off2);
					fprintf(fp,"\tjle .L%s\n",resx.c_str());
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tmovl\t%d(%%ebp), %%edx\n",off2);
					fprintf(fp,"\tcmpl\t%%edx, %%eax\n");
					fprintf(fp,"\tjle .L%s\n",resx.c_str());
				}
				break;
			case o_JGT:
				if(search(arg1x)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tcmpb\t%d(%%ebp), %%al\n",off2);
					fprintf(fp,"\tjg .L%s\n",resx.c_str());
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tmovl\t%d(%%ebp), %%edx\n",off2);
					fprintf(fp,"\tcmpl\t%%edx, %%eax\n");
					fprintf(fp,"\tjg .L%s\n",resx.c_str());
				}
				break;
			case o_JGE:
				if(search(arg1x)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tcmpb\t%d(%%ebp), %%al\n",off2);
					fprintf(fp,"\tjge .L%s\n",resx.c_str());
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tmovl\t%d(%%ebp), %%edx\n",off2);
					fprintf(fp,"\tcmpl\t%%edx, %%eax\n");
					fprintf(fp,"\tjge .L%s\n",resx.c_str());
				}
				break;
			case o_JE:
				if(search(arg1x)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tcmpb\t%d(%%ebp), %%al\n",off2);
					fprintf(fp,"\tje .L%s\n",resx.c_str());
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tmovl\t%d(%%ebp), %%edx\n",off2);
					fprintf(fp,"\tcmpl\t%%edx, %%eax\n");
					fprintf(fp,"\tje .L%s\n",resx.c_str());
				}
				break;
			case o_JNE:
				if(search(arg1x)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tcmpb\t%d(%%ebp), %%al\n",off2);
					fprintf(fp,"\tjne .L%s\n",resx.c_str());
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
					fprintf(fp,"\tmovl\t%d(%%ebp), %%edx\n",off2);
					fprintf(fp,"\tcmpl\t%%edx, %%eax\n");
					fprintf(fp,"\tjne .L%s\n",resx.c_str());
				}
				break;
			case o_ADDR:
				fprintf(fp,"\tleal\t%d(%%ebp), %%eax\n",off1);
				fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				break;
			case o_LDEREF:
				fprintf(fp,"\tmovl\t%d(%%ebp), %%edx\n",off1);
				fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",offr);
				fprintf(fp,"\tmovl\t%%edx, (%%eax)\n");
				break;
			case o_RDEREF:
				fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off1);
				fprintf(fp,"\tmovl\t(%%eax), %%eax\n");
				fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				break;
			case o_RINDEX:
				// Get Address, subtract offset, get memory
				fprintf(fp,"\tleal\t%d(%%ebp), %%edx\n",off1);
				fprintf(fp,"\taddl\t%d(%%ebp), %%edx\n",off2);
				if(search(resx)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t(%%edx), %%eax\n");
					fprintf(fp,"\tmovb\t%%al, %d(%%ebp)\n",offr);
				}
				else
				{
					fprintf(fp,"\tmovl\t(%%edx), %%eax\n");
					fprintf(fp,"\tmovl\t%%eax, %d(%%ebp)\n",offr);
				}
				break;
			case o_LINDEX:
				// Get Address, subtract offset, get memory
				fprintf(fp,"\tleal\t%d(%%ebp), %%edx\n",offr);
				fprintf(fp,"\taddl\t%d(%%ebp), %%edx\n",off1);
				if(search(resx)->type->baseType == t_CHAR)
				{
					fprintf(fp,"\tmovzbl\t%d(%%ebp), %%eax\n",off2);
					fprintf(fp,"\tmovb\t%%al, (%%edx)\n");
				}
				else
				{
					fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",off2);
					fprintf(fp,"\tmovl\t%%eax, (%%edx)\n");
				}
				break;
			case o_RET:
				fprintf(fp,"\tmovl\t%d(%%ebp), %%eax\n",offr);
				generate_epilogue(fp);
				break;
			default:
			break;
		}
	}
}

void SymbolTable::generate_epilogue(FILE *fp)
{
	//Restore the stack pointer and the base pointer
	fprintf(fp,"#; Func Epilogue\n");
	fprintf(fp,"\taddl\t$%d, %%esp\n",offset);
	fprintf(fp,"\tmovl\t%%ebp, %%esp\n");
	fprintf(fp,"\tpopl\t%%ebp\n");
	fprintf(fp,"\tret\n");
	fprintf(fp,"#; Func End\n");
}



