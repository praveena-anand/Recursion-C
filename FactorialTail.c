#include <stdio.h>

int factorialTail(int n)
{
	if (n == 0 || n == 1)
		return 1;
	
	return n * factorialTail(n - 1);
}

void main()
{
	int n;
	
	printf("n = ");
	scanf("%d", &n);
	
	printf("%d\n", factorialTail(n));
}
