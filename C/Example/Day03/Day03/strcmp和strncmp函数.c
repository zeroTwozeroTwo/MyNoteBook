#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//比较字符ASCII码大小

int main()
{

	/*
	strcmp

	返回值: int 类型
	相等：0
	大于：> 0
	小于：< 0
	在不同的系统中可能返回值不同
	*/

	char ch1[20] = "hello";
	char ch2[20] = "hello";

	/*int value = strcmp(ch1, ch2);

	if (value == 0)
	{
		printf("相等");
	}*/

	//字符有限比较
	int value = strncmp(ch1,ch2,3);//如果要比较的长度超过了字符串的长度还是以\0之前的为基准

	printf("%d", value);

	//printf("%d",value);
	return 0;
}