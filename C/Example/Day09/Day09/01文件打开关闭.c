#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main01()
{
	//注意:文件类型指针 不需要用户操作
	//  a为追加
	FILE* fp = fopen("D:\\a.txt", "r");

	if (fp == NULL)
	{
		//1.找不到文件 2.没有权限 3.程序打开文件超出上限
		printf("文件打开失败");
		return -1;
	}

	//文件操作
	printf("文件打开成功\n");

	////将字符写入文件
	//fputc('A',fp);


	////将文件中的一个字符读取出来
	//char ch = fgetc(fp);
	//printf("%c\n",ch);

	//ch = fgetc(fp);
	//printf("%c\n",ch);
	
	//读取文件结尾 结束标志 EOF -1
	char ch;
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c\n",ch);
	}


	//文件关闭
	fclose(fp);

	return 0;
}


int main()
{
	// w和a文件不存在就创建
	/*
	r 以只读形式打开文件 不会创建文件，如果文件不存在会报错
	w 以写的方式打开文件 文件不存在会创建新文件 如果文件里面有内容会覆盖原始内容
	a 以追加方式打开文件 文件不存在会创建新文件 在文件末尾追加内容
	*/
	//1.以写的形式 打开文件
	FILE* fp = fopen("D:\\a.txt", "w");
	//2.判断文件的可用性

	//3.写文件
	//4.关闭文件



	return 0;
}