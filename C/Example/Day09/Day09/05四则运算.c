#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

/*
	1.以写的方式打开文件 判断文件
	2.定义 三个变量 字符串
	3.循环100尺
	4.格式化字符串
	5.录入内容
	6.文件关闭

*/
enum MyEnum
{
	add, sub, mlt, dive
}opt;

int main()
{

	srand((unsigned int)time(NULL));
	FILE* fp = fopen("D:\\test.txt", "w");

	if (!fp)
	{
		return -1;
	}

	int a, b;
	char c;

	char buf[50];

	for (int i = 0; i < 100; i++)
	{
		//格式化字符串
		switch (rand() % 4)
		{
		case 0:
			c = '+';
			break;
		case 1:
			c = '-';
			break;
		case 2:
			c = '*';
			break;
		case 3:
			c = '/';
			break;
		default:
			break;
		}
		memset(buf, 0, 20);
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		sprintf(buf, "%d%c%d=\n", a, c, b, i + 1);
		/*fputs(buf, fp);*/

		int j = 0;
		while (buf[j] != '\0')
		{
			fputc(buf[j++], fp);
		}
	}

	fclose(fp);

	return 0;
}