#include <stdio.h>

void display(int n)
{
	if (n < 1)
		return;
		
	printf("%d\n", n);
	display(n - 1);
	printf("%d\n", n);
}

int main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);
	
	display(n);
}
