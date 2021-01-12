//题目要求
//编写一个C程序,输入a,b,c三个变量值，输出其中最大者
//解题思路
//写出一个求最大值的调用函数，在main函数中调用它，并输出函数值

# include <stdio.h>
int main()
{
	int max(int a, int b, int c);
	int min(int a, int b, int c);
	int a,b,c,MAX,MIN;
	printf("please press three number:");
	scanf("%d,%d,%d",&a,&b,&c);
	MAX = max(a,b,c);
	MIN = min(a,b,c);
	printf("The max number is:%d\n",MAX);
	printf("The min number is:%d\n",MIN);
	return 0;
} 

int max(int a, int b, int c)
{
	int z;
	z = a;
	if(a < b)
	z = b;
	if(z < c)
	z = c;
	return(z);
}

int min(int a, int b, int c)
{
	int z;
	z = a;
	if(a > b)
	z = b;
	if(z > c)
	z = c;
	return(z);
}
