#include "myl.h"

#define BUFF 1000
char buff[BUFF];

int prints(char s[])
{
	if(s == 0)
		return ERR;
	int i=0;
	while(s[i]!='\0')
	{
		buff[i] = s[i];
		i++;
	}
	
	__asm__ __volatile__ (
	"movl $4, %%eax \n\t"
	"movl $1, %%ebx \n\t"
	"int $128 \n\t"
	:
	:"c"(buff), "d"(i)
	) ; // $4: write, $1: on stdout
	return i;
}

int printi(int n)
{
	int i=0,j=0,bytes;
	char temp;						//used for swapping
	if(n==0)
	{
		buff[i++] = '0';			//if number is 0 simply put '0' in buffer
		bytes = i;
	}
	else
	{
		if(n<0)
		{
			buff[i++] = '-';		//if number is negative add a minus sign
			n = -n;
			j=i;
		}
		while(n>0)
		{
			buff[i++] = n%10+'0';	//extract the digits from the back and store it in the buffer
			n /= 10;				//divide the number by 10
		}
		bytes = i--;
		while(j<i)					//reverse the numbers in buffer
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
	return bytes;
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
		while(buff[i] == ' ')
		{
			i++;j++;
		}
	}while(buff[i]=='\n');

	while(buff[i]!='\n' && buff[i]!=' ' && buff[i]!='\t')
	{
		if((i-j)==0 && buff[i] == '-' && neg==0)
		{
			i++;
			j++;
			neg=1;
			continue;
		}
		else if((i-j)==0 && buff[i] == '-' && neg==1)
		{
			*x=0;
			return ERR;
		}
		if(buff[i] < '0' || buff[i] > '9')
		{
			*x = 0;
			return ERR;
		}
		i++;
	}
	if((i-j)==0 || ((i-j)==1 && buff[0]=='-'))
		return ERR;
	buff[i] = '\0';
	for(;j<i;j++)
	{
		*x = ((*x)<<3) + ((*x)<<1) + buff[j]-'0';
	}
	if(neg)
		*x = -(*x);

	return OK;
}

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
		while(buff[i] == ' ')
		{
			i++;j++;
		}
	}while(buff[i]=='\n');

	while(buff[i]!='\n' && buff[i]!='.')
	{
		if((i-j)==0 && buff[i]=='-' && neg==0)
		{
			i++;
			j++;
			neg=1;
			continue;
		}
		else if((i-j)==0 && buff[i]=='-' && neg==1)
		{
			//negative comes twice
			*f=0.0;
			return ERR;
		}
		if(buff[i] < '0' || buff[i] > '9')
		{
			*f = 0.0f;
			return ERR;
		}
		i++;
	}
	int start_pos = j;
	for(;j<i;j++)
	{
		front = (front<<3) + (front<<1) + buff[j]-'0';
	}
	//printf("front = %lld\n",front);
	*f = front;
	j = start_pos;
	if(buff[i] == '\n')
	{
		if((buff[j]=='-' && (i-j)==1) || (i-j)==0)
		{
			prints("Yahan\n");
			return ERR;
		}
		else if(neg)
			*f *= -1.0f;
		return OK;
	}
	//get the decimal part
	i++;
	//printf("i = %d\n",i);
	j=i;
	while(buff[i]!='\n')
	{
		if(buff[i] < '0' || buff[i] > '9')
		{
			*f = 0.0f;
			return ERR;
		}
		i++;
	}
	for(;j<i;j++)
	{
		back = back*10.0f + (float)(buff[j]-'0');
		ten *= 10.0f;
	}
	//printf("back = %f\nten = %f\n",back,ten);
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
	char temp;						//used for swapping
	if(f<0)
	{
		f = -f;
		buff[i++] = '-';
		j++;
	}
	front = (int)f;
	if(front==0)
	{
		buff[i++] = '0';			//if number is 0 simply put '0' in buffer
		bytes = i;
	}
	else
	{
		while(front>0)
		{
			buff[i++] = front%10+'0';	//extract the digits from the back and store it in the buffer
			front /= 10;				//divide the number by 10
		}
		bytes = i--;
		while(j<i)					//reverse the numbers in buffer
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
	//printf("f = %f\n",f);
	for(j=0;j<precision;j++)
	{
		f*=10;
		buff[i++] = (int)f + '0';
		//putchar(buff[i-1]);
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
	return bytes;
}
