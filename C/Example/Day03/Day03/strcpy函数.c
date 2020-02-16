#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//字符串拷贝
int main()
{

	char ch1[] = "hello world";
	char ch2[100];


	//参数:目标字符串,源字符串
	strcpy(ch2,ch1);//带\0拷贝 成功返回地址，失败返回null

	printf("%s",ch2);

	return 0;
}