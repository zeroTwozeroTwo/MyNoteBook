#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	/*
	//在字符串中匹配字符
	char chars[] = "hello world";
	char ch = 'l';
	//在字符串中查找字符
	//匹配字符第一次出现的位置
	//参数：被匹配的字符串，要匹配的字符

	 char * p = strchr(chars,ch);

	 printf("%s",p);*/


	//在字符串中匹配字符串
	//参数:被匹配的字符串，要匹配的字符串

	char chars[100] = "你好,C语言";
	char ch[10] = "C";

	char * p = strstr(chars,ch);
	printf("%s",p);
	return 0;
}