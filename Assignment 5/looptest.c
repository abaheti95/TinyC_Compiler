//this will check whether all the loops are working fine or not

int main()
{
	int i,j=0;
	int a[40];
	double x,z = 1.0;
	int y = 9;
	int cons = 100;
	z = 9.0;

	for(i=1;i<cons;i++)
	{
		x = x+10;
		y--;
	}

	while(y<30)
	{
		a[y]++;
	}

	j = 1;
	do
	{
		i = i-1;
	}while(a[j]<z);

	if(i<=j && y >= 9)
	{
		x = x--;
	}
	else
	{
		y = y*x;
	}
	return 0;
}