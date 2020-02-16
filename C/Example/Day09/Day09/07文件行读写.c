#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


int main01()
{

	//写一行
	char* p = "hello world";

	FILE* src = fopen("D:\\src.txt", "w");

	if (!src)
	{
		return -1;
	}

	//成功返回0 失败返回-1
	int value = fputs(p, src);

	if (!value)
	{
		printf("成功");
	}



	fclose(src);

	return 0;
}

int main02()
{
	FILE* src = fopen("D:\\src.txt", "r");

	if (!src)
	{
		return -1;
	}
	//块读取
	char buf[1024];//1KB
	
	fgets(buf, 1024, src);

	printf("%s\n",buf);

	fclose(src);

	return 0;
}

int main()
{
	FILE* src = fopen("D:\\src.txt", "r");
	
	if (!src)
	{
		return -1;
	}

	//char buf[1024];
	char* buf = (char*)malloc(sizeof(char) * 1024);

	//feof 判断文件流是否到结尾  EOF 判断字符是否到结尾
	//feof 非0值:已经到文件结尾   0:没有到文件结尾
	while (!feof(src))
	{
		memset(buf, 0, 1024);
		fgets(buf, 1024, src);
		printf("%s",buf);
	}
	
	fclose(src);

	return 0;
}