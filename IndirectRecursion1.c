#include <stdio.h>

void f1(int n)
{
	if (n == 1)
		return;
	n = n - 1;
	printf("%d\t", n);
	f2(n);
}

void f2(int n)
{
	if (n == 1)
		return;
		
	n = n / 2;
	printf("%d\t", n);
	f1(n);
}

int main()
{
	int n, i;
	
	printf("n = ");
	scanf("%d", &n);
	
	f1(n);
	printf("\n\n");
	f2(n);
}
