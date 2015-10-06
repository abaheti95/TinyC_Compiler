#include "myl.h"

#define BUFF 1000
char buff[BUFF];

int prints(char s[])
{
	if(s == 0)
		return ERR;										//if s points to NULL then return error
	int i=0;
	while(s[i]!='\0')									//till s ends count the length
	{
		i++;
	}
	
	__asm__ __volatile__ (
	"movl $4, %%eax \n\t"
	"movl $1, %%ebx \n\t"
	"int $128 \n\t"
	:
	:"c"(s), "d"(i)
	) ; // $4: write, $1: on stdout
	return i;											//returning the number of bytes printed
}

int printi(int n)
{
	int i=0,j=0,bytes;
	char temp;											//used for swapping
	if(n==0)
	{
		buff[i++] = '0';								//if number is 0 simply put '0' in buffer
		bytes = i;
	}
	else
	{
		if(n<0)
		{
			buff[i++] = '-';							//if number is negative add a minus sign
			n = -n;
			j=i;
		}
		while(n>0)
		{
			buff[i++] = n%10+'0';						//extract the digits from the back and store it in the buffer
			n /= 10;									//divide the number by 10
		}
		bytes = i--;
		while(j<i)										//reverse the numbers in buffer
		{
			temp    = buff[i];
			buff[i] = buff[j];
			buff[j] = temp;
			i--;
			j++;
		}
	}

	__asm__ __volatile__ (
	"movl $4, %%eax \n\t"
	"movl $1, %%ebx \n\t"
	"int $128 \n\t"
	:
	:"c"(buff), "d"(bytes)
	) ; // $4: write, $1: on stdout
	return bytes;										//returning the number of bytes printed
}

int readi(int *x)
{
	int i=0,j=0,neg=0;
	*x = 0;
	do
	{
		i=j=0;
		__asm__ __volatile__ (
		"movl $3, %%eax \n\t"
		"movl $0, %%ebx \n\t"
		"int $128 \n\t"
		:
		:"c"(buff)
		) ; // $3: read, $0: on stdin
		while(buff[i] == ' ' || buff[i] == '\t')
		{
			i++;j++;
		}
	}while(buff[i]=='\n');								//if the characters entered are spaces then take the input once again

	while(buff[i]!='\n' && buff[i]!=' ' && buff[i]!='\t')
	{
		if((i-j)==0 && buff[i] == '-' && neg==0)		//if minus sign appears initialize neg
		{
			i++;
			j++;
			neg=1;
			continue;
		}
		else if((i-j)==0 && buff[i] == '-' && neg==1)	//if minus sign appears twice
		{
			*x=0;
			return ERR;
		}
		if(buff[i] < '0' || buff[i] > '9')				//if character is not digit
		{
			*x = 0;
			return ERR;
		}
		i++;
	}
	if((i-j)==0 || ((i-j)==1 && buff[j]=='-'))			//if only minus is entered then error
		return ERR;
	buff[i] = '\0';
	for(;j<i;j++)
	{
		*x = ((*x)<<3) + ((*x)<<1) + buff[j]-'0';		//Evaluating the integer from characters
	}
	if(neg)
		*x = -(*x);										//Negating the number if neg = 1

	return OK;
}

// Inputs like "." and "-." are considered as valid inputs
int readf(float *f)
{
	int i=0,j=0,neg=0;
	long long int front=0;
	float back=0.0f;
	float ten=1.0f;
	do
	{
		i=j=0;
		__asm__ __volatile__ (
		"movl $3, %%eax \n\t"
		"movl $0, %%ebx \n\t"
		"int $128 \n\t"
		:
		:"c"(buff)
		) ; // $3: read, $0: on stdin
		while(buff[i] == ' ' || buff[i] == '\t')
		{
			i++;j++;
		}
	}while(buff[i]=='\n');								//keep taking the input until valid characters are entered

	while(buff[i]!='\n' && buff[i]!=' ' && buff[i]!='\t' && buff[i]!='.')
	{
		if((i-j)==0 && buff[i]=='-' && neg==0)			//if minus sign appears intializing neg = 1
		{
			i++;
			j++;
			neg=1;
			continue;
		}
		else if((i-j)==0 && buff[i]=='-' && neg==1)		//if negative appears twice then error
		{
			*f=0.0;
			return ERR;
		}
		if(buff[i] < '0' || buff[i] > '9')				//if not a digit then error
		{
			*f = 0.0f;
			return ERR;
		}
		i++;
	}
	int start_pos = j;
	for(;j<i;j++)
	{
		front = (front<<3) + (front<<1) + buff[j]-'0';	//converting the front part to integer and storing it float
	}
	*f = front;
	j = start_pos;
	if(buff[i] == '\n' || buff[i] == ' ' || buff[i] == '\t')
	{
		if((buff[j]=='-' && (i-j)==1) || (i-j)==0)		// if only a minus sign is entered then error
		{
			return ERR;
		}
		else if(neg)
			*f *= -1.0f;
		return OK;
	}
	//get the decimal part
	i++;
	j=i;
	while(buff[i]!='\n' && buff[i]!=' ' && buff[i]!='\t')
	{
		if(buff[i] < '0' || buff[i] > '9')				//if the part after . is not all digits then error
		{
			*f = 0.0f;
			return ERR;
		}
		i++;
	}
	for(;j<i;j++)
	{
		back = back*10.0f + (float)(buff[j]-'0');		//evaluating the back part and then adding it to the float
		ten *= 10.0f;
	}
	*f += back/ten;
	if(neg)
		*f *= -1.0f;
	return OK;
}
#define precision 6
int printd(float f)
{
	int front=0;
	int i=0,j=0,bytes;
	char temp;											//used for swapping
	if(f<0)
	{
		f = -f;
		buff[i++] = '-';								//if float is negative then adding a minus
		j++;
	}
	front = (int)f;
	if(front==0)
	{
		buff[i++] = '0';								//if number is 0 simply put '0' in buffer
		bytes = i;
	}
	else
	{
		while(front>0)
		{
			buff[i++] = front%10+'0';					//extract the digits from the back and store it in the buffer
			front /= 10;								//divide the number by 10
		}
		bytes = i--;
		while(j<i)										//reverse the numbers in buffer
		{
			temp    = buff[i];
			buff[i] = buff[j];
			buff[j] = temp;
			i--;
			j++;
		}
	}
	buff[bytes++] = '.';
	i = j = bytes;
	f -= (int)f;
	for(j=0;j<precision;j++)
	{
		f*=10;
		buff[i++] = (int)f + '0';						//adding decimal digits one by one
		f -= (int)f;
	}
	bytes = i;

	__asm__ __volatile__ (
	"movl $4, %%eax \n\t"
	"movl $1, %%ebx \n\t"
	"int $128 \n\t"
	:
	:"c"(buff), "d"(bytes)
	) ; // $4: write, $1: on stdout
	return bytes;										//returning the number of bytes printed
}
