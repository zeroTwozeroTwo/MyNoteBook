#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//字符串有限拷贝
int main()
{
	char ch1[] = "hello world";
	char ch2[100];

	//参数:目标字符串，源字符串，要拷贝的字符串长度
	strncpy(ch2,ch1,5);//有限拷贝不会拷贝\0到字符串中
	//ch2[5] = 0;
	ch2[5] = '\0';//需要手动加
	printf("%s",ch2);

	return 0;
}