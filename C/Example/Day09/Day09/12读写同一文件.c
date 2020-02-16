#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
	1.打开文件，判断可用性
	2.读取内容 再放到堆空间中
	3.再次打开文件 读取堆空间内容 写入文件中 关闭文件
*/

int main()
{
	FILE* file = fopen("D:\\test.txt", "r+");

	if (!file)
	{
		return -1;
	}

	char** buf = (char**)malloc(sizeof(char*) * 100);
	int a, b, value;
	char c;

	for (int i = 0; i < 100; i++)
	{
		buf[i] = (char*)malloc(sizeof(char) * 40);
		//fgets(buf[i],40,file);
		//格式化读取
		fscanf(file, "%d%c%d=\n", &a, &c, &b);
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
		sprintf(buf[i], "%d%c%d=%d\n", a, c, b, value);
	}

	//for (int i = 0; i < 100; i++)
	//{
	//	printf("%s\n",buf[i]);
	//}

	fclose(file);


	//将结果重新写入

	file = fopen("D:\\test.txt", "r+");

	if (!file)
	{
		return -1;
	}

	for (int i = 0; i < 100; i++)
	{
		fputs(buf[i], file);
	}

	fclose(file);

	//内存释放
	for (int i = 0; i < 100; i++)
	{
		free(buf[i]);
		buf[i] = NULL;
	}

	free(buf);

	return 0;
}