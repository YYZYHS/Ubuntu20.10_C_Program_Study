/*
  *题目要求
  *判断一个数n能否同时被3和5同时整除

  *思路
  *参考答案给的思路是设置一个标识符，0为可整除，-1为不可
  *自己思考：先判断能否被3整除，若能，继续判断能否被5整除
  
  *参考答案给的伪代码
  	input n
	flag = 0
	if mod(n,3) != 0 then flag = -1
	if mod(n,5) != 0 then flag = -1
	if flag = 0 then 
		printf("可以")
	else
		printf("不可以")


  *我自己尝试的伪代码
  	inpt n
	if
		mod(n,3) != 0 then printf("不可以")
	else if 
		mod(n,5) != 0 then printf("不可以")
	else
		printf("可以"))
*/

#include <stdio.h>
int main()
{
	int n;
	printf("Pleasr press a number:");
	scanf("%d",&n);

	//这是题目的思路
	printf("这是题目的思路:\n");
	int flag = 0;
	if(n % 3 != 0) flag = -1;
	if(n % 5 != 0) flag = -1;
	printf("此时flag的值为:%d\n",flag);
	if(flag == 0)
	printf("%d可以被3和5同时整除\n",n);
	else
	printf("%d不可以被3和5同时整除\n",n);

	//这是我的思路
	printf("\n这是我的思路:\n");
	if(n % 3 != 0)
		printf("%d不可以被3和5同时整除\n",n);
	else if(n % 5 != 0)
		printf("%d不可以被3和5同时整除\n",n);
	else
		printf("%d可以被3和5同时整除\n",n);
}
