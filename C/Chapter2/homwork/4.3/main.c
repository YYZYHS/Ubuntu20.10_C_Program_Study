/*
	题目要求：
	有三个数a,b,c,要求按照大小顺序将他们输出
*/
/*
	思路分析：
	可以先将两个排好序，然后分别与第三个作比较，看看应该插在哪儿
*/
/*
	伪代码：
	input a,b,c
	if a < b then swap a,b   //a,b的值交换了
	if a < c then printf c,a,b
	else
		if c < b then printf a,b,c
		else printf a,c,b
		endif
	endif
*/
/*C语言代码*/

#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Please input three numbers:");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a < b)
	{
		int d;
		d = a;
		a = b;
		b = d;
	}
	if (a < c) printf("%d,%d,%d\n",c,a,b);
	else
	{
		if (c < b) printf("%d,%d,%d\n",a,b,c);
		else
		printf("%d,%d,%d\n",a,c,b);
	}
	return 0;
}
