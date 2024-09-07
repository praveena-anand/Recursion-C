#include <stdio.h>

int fun1(int x)
{
	if (x <= 1)
		return;
	return x * fun2(x - 1);
}

int fun2(int x)
{
	if (x <= 1)
		return;
	return x * fun1(x - 1);
}

void main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);
	
	printf("%d", fun1(n));
}
