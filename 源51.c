#include<stdio.h>
int main()
{
	int x = 4, y = 6, t;
	t = x;
	x = y;
	y = t;
	printf("a=%d,b=%d\n", x, y);
	return 0;
}