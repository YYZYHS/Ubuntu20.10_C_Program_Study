/*
	题目要求：
	依次将十个数输入，并最终输出最大值
*/

/*
	思路分析：
	顺序输入十个数，每输入一个数，都和当前最大的数进行比较，重新获得最大数
*/

/*

	伪代码：
	n = 1
	input max = 0
	while n < 10 do
		input a
		if a > max then max = a
		n = n + 1
	end do
	print max

*/
/*C程序语言代码*/
#include <stdio.h>
int main()
{
	int a[10];
	int n = 1,count_max = 0,count_min = 0;
	printf("Please input zhe value of a[0]:");
	scanf("%d",&a[0]);
	int max,min;
	max = min = a[0];
	while(n < 10)
	{
		printf("Please input zhe value of a[%d]:",n);
		scanf("%d",&a[n]);
		if(a[n] > max)
		{
			max = a[n];
			count_max = n;
		}
		if(a[n] < min)
		{
			min = a[n];
			count_min = n;
		}
		n++;
	}
	printf("The max number is:a[%d] = %d\n",count_max,max);
	printf("The max number is:a[%d] = %d\n",count_min,min);
}


