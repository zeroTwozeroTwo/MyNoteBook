#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//切割字符串
int main()
{
	//参数：指向欲分割的字符串，分割的字符串
	char chars[] = "www.baidu.com";
	char * p = strtok(chars,".");
	//将切割点，用\0表示会破坏原有字符串
	//printf("%s", p);
	while (p != NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, ".");
	}

	return 0;
}