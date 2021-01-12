# include <stdio.h>
//主函数
int main()				//定义主函数
{					//主函数体开始
	int max(int x , int y);		//对被调用函数max的证明
	int a,b,c;			//定义变量a,b,c
	scanf("%d,%d",&a,&b);		//输入变量a和b的值
	c = max(a,b);			//调用max函数，将得到的值赋值给c
	printf("max = %d\n",c);		//输出c的值
	return 0;			//返回函数指为0
}					//主函数体结束
//求两个整数中的较大者的max的函数
int max(int x,int y)			//定义max函数，函数值为整形，形式参数x和y为整形
{
	int z;				//max函数中的声明部分，定义本函数中用到的变量z为整形
	if(x > y) z = x;		//若 x>y 成立，将x的值赋给变量z
	else z = y;			//反之，则将y的值赋给变量z
	return(z);			//将z的值作为max函数值，返回到调用max函数的位置
}
