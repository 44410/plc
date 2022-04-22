#include<stdio.h>
int main()
{
	char c1,c2,c3,c4;
	printf("请输入需要加密的英文名:\t");
	scanf("%c%c%c%c\n",&c1,&c2,&c3,&c4);
	c1=c1+1;
	c2=c2+1;
	c3=c3+1;
	c4=c4+1;
	printf("加密后的英文名是%c %c %c %c\n",c1,c2,c3,c4);
	return 0;
}
