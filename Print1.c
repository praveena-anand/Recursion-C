#include <stdio.h>

void print(int a)
{
	if (a < 1)
		return;
	printf("%d\n", a);
	print(a/2);
}

void main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);
	
	print(n);
}
