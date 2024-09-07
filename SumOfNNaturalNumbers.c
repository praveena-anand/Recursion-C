#include <stdio.h>

int sum(int x)
{
	if (x == 1)
		return x;
	return x + sum(x-1);
}

void main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);
	
	printf("%d\n", sum(n));
}
