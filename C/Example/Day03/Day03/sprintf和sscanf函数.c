#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{


	//将数据格式化后放入到字符串中
	/*int a = 123;
	char chars[] = "hello";
	char dest[100];*/
	//sprintf(dest,"%s%d",chars,a);
	//printf("%s",dest);

	//从字符串里面取出数据
	int a = 0;
	char chars[100];
	char dest[100] = "hello123";
	sscanf(dest,"%[a-z]%d",chars,&a);

	printf("%s\n",chars);
	printf("%d\n", a);


	return 0;
}