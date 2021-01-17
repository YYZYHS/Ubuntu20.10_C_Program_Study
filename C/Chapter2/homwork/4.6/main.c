/*
  *题目要求
  *将100~200内的素数输出

  *思考：
  *素数的定义是只能被其自身和1整除，其他的都不可除尽
  *实际上，n不必被2~(n-1)的整数除，只需要2~n/2，甚至2~√￣^n的整数就可

  *伪代码如下
  n = 100
  while n < 201 do
  i = 2
  while i<=√￣^n
   if n%i = 0 then
   		i = n
   else
   		i = i + 1
   end if
  end do
  if i < √￣^n then print n
  n = n+1
  end do
*/

#include <stdio.h>
#include<math.h>

int main()
{
	int n = 100;
	while(n < 201)
	{
		int i = 2;
		int m = sqrt(n);
		while(i < m)
		{
			if(n%i == 0)
				i = n;
			else 
				i++;
		}
	if(i < sqrt(n))
		printf("%d\t",n);
	n++;
	}
}
