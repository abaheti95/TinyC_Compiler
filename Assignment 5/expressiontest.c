//The following code will check whether general expressions
//are handled well or not.
//main function declaration
int main()
{
	int i,j;
	double d,e,f;
	char ch;
	int *a,**b;
	*a = 10;
	*b = &i;
	a = &j;
	i = *a + 1;
	double arr[30];
	e = --arr[10];
	int arr2[10][20];
	f = arr2[3][4]--;
	ch = 'c';
	i = 10;
	j = i*5>>2;
	f = 12.0;
	d = f/e;
	int lambda = (i+j)%10;

	while(i < j)
	{
		j++;
	}

	arr2[4][5] = arr2[2][3]++;

	i = f*j;
	e = ch*d;
	int c = i-j;
	if(i<j && e>=f)
	{
		d = f+e;
	}
	else
	{
		d = f;
	}
	i = (-j*f)/(e/f-d);
}