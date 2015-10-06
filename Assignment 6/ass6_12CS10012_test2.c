int main();

int fibonacci(int n)
{
	if(n<=1)
	{
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int a;
	readi(&a);
	printi(fibonacci(a));
	return 0;
}