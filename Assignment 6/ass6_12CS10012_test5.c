int main()
{
	int *a,b;
	b = 10;
	prints("Before\n");
	printi(b);
	a = &b;
	*a = 5;
	prints("\nAfter\n");
	printi(b);
	return 0;
}