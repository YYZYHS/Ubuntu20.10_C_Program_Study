/*
  *题目要求
  *求两个数m和n的最大公约数
  *
  *思路分析
  *大数除小数，留下余数，大数再除余数，最终余数为0时，被除数就是最大公约数
  *
  *伪代码
  	input m,n
	if m<n swap(m,n)
	t = m % n
	while r != 0
	do
		m = n;
		n = r
		r = m % n
	end do
	print n
*/

#include <stdio.h>
int main()
{
	printf("Please press the value of m & n:");
	int m,n;
	scanf("%d,%d",&m,&n);
	if(m < n)
	{
		int temp;
		temp = m;
		m = n;
		n = temp;
	}
	int r = m % n;
	while(r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	printf("他们的最大公约数是%d\n",n);
}
