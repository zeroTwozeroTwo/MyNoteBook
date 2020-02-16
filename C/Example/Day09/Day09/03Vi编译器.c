#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

	/*
	1.指定一个文件名
	2.打开文件 w
	3.判断文件可用性
	4.循环录入内容
	5.退出命令
	6.将字符串写入文件中
	7.关闭文件
	*/

	printf("请输入一个要创建的文件名:\n");

	char fileName[256];

	scanf("%s", fileName);
	//注意问题:用来接收换行
	getchar();

	FILE* fp = fopen(fileName,"w");

	if (!fp)
	{
		return -1;
	}

	//循环录入
	char buf[1024];
	while (1)
	{
		memset(buf, 0, 1024);
		
		fgets(buf, 1024, stdin);
		
		//退出命令
		//zz=exit
		if (!strncmp("zz=exit", buf, 7))
		{
			break;
		}

		int i = 0;
		while (buf[i])
		{
			fputc(buf[i++],fp);
		}	
		//更新缓冲区
		fflush(fp);
	}

	fclose(fp);

	return 0;
}