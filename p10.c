#include <stdio.h>
int main()
{
	long long n, a, b, c;
	a = 0;	
	b = 1;
	printf("Enter a number: ");
	scanf("%lld", &n);
	for(int i = 0; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lld ", a);
	}
	printf("\n");

}
