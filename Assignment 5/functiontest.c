double function(int a,int b);

char func_mine(int x,int y,double z);

double function(int a,int b)
{
	a = 10;
	b = 20;
	a = a+b;
	double c;
	c=a;
	return a;
}

int main()
{
	int x;
	int y;
	double k;
	k = function(2,y);
	char n;
	n = func_mine(2,3,k);

}

char func_mine(int x,int y,double z)
{
	char a;
	a = 'a';
	if(x<y)
	{
		x = x*y/z;
		while(x<y)
		{
			x = x+z;
		}
	}
	else
	{
		y = x--;
	}
	return a;
}