//题目要求：
//A，B互换

/*
	伪代码
	c = a
	a = b
	b = c
*/

//开始写代码

#include <stdio.h>
int main()
{
	int a,b,c;
	printf("please press the value of a & b:");
	scanf("%d,%d",&a,&b);
	printf("Before:\na=%d\nb=%d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("Later:\na=%d\nb=%d\n",a,b);
	return 0;
}
