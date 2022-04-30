#include<stdio.h>
int runnian(int); 
int main(void)
{
	int year;
	printf("请输入一个年份：");
	scanf_s("%d", &year);
	if (runnian(year) == 1)
		printf("%d是闰年", year);
	else printf("%d不是闰年", year);
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
