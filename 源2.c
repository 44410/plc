#include"stdio.h"
main()
{
	int k, i = 0, j;
	while (i <= 2)
	{
		for (k = 1; k <= i; k++)
			printf(" ");
		for (j = 0; j <= 3; j++)
		printf("*");
		i++;
		printf("\n");
	}
}