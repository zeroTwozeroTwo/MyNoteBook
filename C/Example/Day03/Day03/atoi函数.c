#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//字符串转化成其他类型
int main()
{
	char arr[] = "3.14159267";
	//转化为整形
	//int a = atoi(arr);

	//转化为long 
	//long a = atol(arr);

	//转化为float
	float a = atof(arr);

	printf("%f",a);

	return 0;
}