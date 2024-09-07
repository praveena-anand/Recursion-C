#include <stdio.h>

int print(int a)
{
	if (a < 1)
		return 0;
	return 1 + print(a/2);
}

int main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);
	
	printf("%d\n", print(n));
	
	return 0;
}
