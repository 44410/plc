#include<stdio.h>
int runnian(int); 
int main(void)
{
	int year;
	printf("������һ����ݣ�");
	scanf_s("%d", &year);
	if (runnian(year) == 1)
		printf("%d������", year);
	else printf("%d��������", year);
	system("psuse");
	return 0;
}
int runnian(int year)
{
	if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
	year = 1;
	else year = 0;
	return year;
}
