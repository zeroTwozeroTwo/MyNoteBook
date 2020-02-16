#include<stdio.h>


//全局函数 
int a = 10;
int main()
{
	//变量作用范围: 从创建到所在函数结束
	int a = 10;

	printf("%d,%d",a,a++);

	return 0;
}