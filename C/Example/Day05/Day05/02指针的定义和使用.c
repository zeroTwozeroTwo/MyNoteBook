#include<stdio.h>


int main()
{
	int a = 10;
	int b = 100;
	//指针是一种数据类型 p是指针类型变量。用来指向一个变量的地址
	int* p = &a;


	p = &b;

	printf("%p\n", &b);
	printf("%p\n", p);

	//通过指针修改变量的值
	*p = 200;
	printf("%d\n", b);
	printf("%d\n", *p);

	//sizeof()指针类型在内存中的大小	在32位操作系统中所有指针大小为4个字节大小
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(p));


	return 0;
}