#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


//加密:  从源文件中读取字符 进行加密 生成一个新文件
//解密:  从加密文件中读取字符 进行解密 变成源文件
int main01()
{

	//加密
	FILE* src = fopen("D:\\src.txt","r");
	FILE* dest = fopen("D:\\dest.txt", "w");

	if (!src || !dest)
	{
		return -1;
	}

	//读源文件内容 直到EOF
	char ch;
	while ((ch = fgetc(src)) != EOF)
	{
		ch++;
		fputc(ch, dest);
	}

	fclose(dest);
	fclose(src);

	return 0;
}

int main()
{
	//解密
	FILE* src = fopen("D:\\dest.txt", "r");
	FILE* dest = fopen("D:\\srcn.txt", "w");

	if (!src || !dest)
	{
		return -1;
	}

	char ch;
	while ((ch = fgetc(src)) != EOF)
	{
		ch--;
		fputc(ch,dest);
	}

	fclose(dest);
	fclose(src);

	return 0;
}