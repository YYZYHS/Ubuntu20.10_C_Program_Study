// 【例1.1】 要求在屏幕上输出下面这句话
// This is a C program
//
// 解题思路：在主函数中使用printf函数原样地输出以上文字
//
// 编写程序：


# include <stdio.h>				//这是编译预处理指令
int main()					//定义主函数 -- 程序的入口 -- main函数有且只有一个
{						//函数开始的标志
	printf("This is a C program!\n");	//输出所指定的一行信息
	return 0;				//函数执行完毕时返回函数值0
}						//函数结束的标志
//gcc main.c -o main
