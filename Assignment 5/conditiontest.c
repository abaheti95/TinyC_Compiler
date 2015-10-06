int main()
{
	char x,y='a';
	int a=5,b=10,c = y;
	double z= a*b+x;

	if(x>y)
	{
		if(z<0.0)
		{
			a++;
		}
	}
	else
	{
		b++;
	}
	if(a>b)
	{
		z = b;
	}
	else
	{
		if(b==a || (y && x<'z'))
		{
			c++;
		}
		else
		{
			c--;
		}
	}
	return 0;
}