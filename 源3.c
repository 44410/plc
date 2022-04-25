#include<stdio.h>
int main()
{
	int a = 4, b = 11;
	printf("%d\n", a++ + ++b);
	printf("%d\n", b % a);
	printf("%d\n", !a > b);
	printf("%d\n", a + b);
	printf("%d\n", a && b);
	return 0;
}