#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
fseek(文件流,移动字节,模式) 移动光标位置
模式:
SEEK_SET 文件起始位置开始移动
SEEK_END 文件结尾位置开始移动
SEEK_CRT 以光标当前位置为标准

ftell(文件流)  获取光标当前位置 返回值是long -1代表失败

rewind(文件流) 重置光标到文件开始位置

*/

int main01()
{

	char* arr = "hello world";
	FILE* fp = fopen("D:\\h.txt", "w");

	if (!fp)
	{
		return -1;
	}

	fputs(arr, fp);

	fclose(fp);


	return 0;
}

int main()
{
	FILE* fp = fopen("D:\\h.txt", "r");

	if (!fp)
	{
		return -1;
	}

	//SEEK_SET 文件起始位置开始移动
	//SEEK_END 文件结尾位置开始移动
	//fseek(fp, 6, SEEK_SET);
	//fseek(fp, -5, SEEK_END);

	char ch;
	int start_len = ftell(fp);
	printf("%d\n", start_len);
	while ((ch = getc(fp)) != EOF)
	{
		//fseek(fp, 5, SEEK_CUR);
		int len = ftell(fp);
		printf("%c", ch);
		printf("%d\n",len);
	}
	

	fclose(fp);

	return 0;
}