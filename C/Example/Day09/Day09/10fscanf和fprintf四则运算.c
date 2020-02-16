#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	1.打开两个文件
	2.判断可用性
	3.循环读取
	4.格式化字符串 sscanf() 计算结果
	5.放到目的文件中
	6.关闭文件
*/

/*
字符串标准输入输出
scanf() printf()

格式化字符串
sscanf() sprintf()

格式化文件读写
fscanf()  fprintf()

*/

int main()
{
	FILE* src = fopen("D:\\test.txt", "r");
	FILE* dest = fopen("D:\\result.txt", "w");

	if (!src || !dest)
	{
		return -1;
	}

	int a, b;
	char c;
	int value = 0;
	char buf[50];
	for (int i = 0; i < 100; i++)
	{
		memset(buf, 0, 50);
		fgets(buf, 50, src);
		sscanf(buf, "%d%c%d=", &a, &c, &b);
		switch (c)
		{
		case '+':
			value = a + b;
			break;
		case '-':
			value = a - b;
			break;
		case '*':
			value = a * b;
			break;
		case '/':
			value = a / b;
			break;
		default:
			break;
		}
		/*	memset(buf, 0, 50);
			sprintf(buf, "%d%c%d=%d   ---------第%d次\n", a, c, b, value, i + 1);
			fputs(buf, dest);*/

			//将格式化好的字符串写入文件中
		fprintf(dest, "%d%c%d=%d ------第%d次\n", a, c, b, value, i + 1);
	}

	fclose(src);
	fclose(dest);

	return 0;
}