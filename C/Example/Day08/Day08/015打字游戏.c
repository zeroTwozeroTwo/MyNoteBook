#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>


void tips()
{
	printf("=============打字游戏=============\n");
	printf("===========按任意键继续===========\n");
	printf("==========按Esc 退出游戏==========\n");

	char ch = _getch();
	if (ch == 27)
	{
		exit(0);
	}
}

void rand_ch(char* arr)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 50; i++)
	{
		arr[i] = rand() % 26 + 'a';
	}
}

void print_ch(char* arr)
{
	//变量 计时器 开始 结束  计数器
	unsigned int start_time;
	unsigned int end_time;
	int value = 0;
	for (int i = 0; i < 50; i++)
	{
		char ch = _getch();
		if (i == 0)
		{
			start_time = time(NULL);
		}
		if (ch == arr[i])
		{
			printf("%c", ch);
			value++;
		}
		else
		{
			printf("-");
		}
	}
	end_time = time(NULL);

	printf("\n用时:%d秒\n", end_time - start_time);
	printf("正确率:%.1f%%\n", value * 1.0 / 50 * 100);
}

int main()
{
	//字库 
	char arr[51];
	memset(arr, 0, 51);


	//1.提示操作
	tips();
	//2.随机字符
	rand_ch(arr);
	printf("%s\n", arr);
	//3.输入字符
	print_ch(arr);

	system("pause");

	return 0;
}