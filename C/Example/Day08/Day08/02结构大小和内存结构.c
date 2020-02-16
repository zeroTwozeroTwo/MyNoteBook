#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//结构体需要根据数据类型进行内存对齐
/*
	注意:
	所有数据类型的大小在内存中存储的地址一定是它的类型的倍数.

	创建结构体建议，按数据类型从上到下(大的放上面,小的放下面)
*/
struct students
{
	char name[20];//20
	unsigned int age;//4
	char tel[15];//15
	char sex;//1
	float score[3];//12
}stu;

int main()
{

	printf("%d\n", sizeof(float));
	printf("结构体大小:%d\n",sizeof(stu));

	return 0;
}