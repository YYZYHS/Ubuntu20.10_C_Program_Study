/*
	题目要求：
	    求从1加到n的和
*/

/*
	最简单的方法，使用循环，一路加下去就好了
*/

/*
	伪代码
	input n
	i = 1
	sum = 0
	while i < n do
	sum = sum + i
	i++
	end do
	printf sum
*/

#include <stdio.h>
int main()
{
	int n,i = 1,sum = 0;
	printf("Please press the value of n:");
	scanf("%d",&n);
	while(i <= n)
	{
		sum = sum + i;
		i++;
	}
	printf("1+2+……+%d = %d\n",n,sum);
	return 0;
}
