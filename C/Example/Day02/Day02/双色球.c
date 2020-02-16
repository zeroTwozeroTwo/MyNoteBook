#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>

/*
1.添加头文件，time.h  stdlib.h
2.添加随机数种子srand((unsigned int)time(NULL));
3.生成随机数
*/

void print(int num, int arr[]);

int main()
{
	srand((unsigned int)time(NULL));

	/*for (int i = 0; i < 100; i++)
	{
		printf("%d\n", rand() % 100);
	}*/
	int ball[7];
	_Bool flag = false;//定义布尔类型变量
	//双色球 两种原色 红球 + 蓝球(6+1) 红球1-33 蓝球1-16 
	//红色球不能重复，篮球和红球可以重复

	//红球
	for (int i = 0; i < 6; i++)
	{
		int temp = rand() % 33 + 1;
		//去重
		for (int j = 0; j < i; j++)
		{
			//判断是否重复
			if (ball[j] == temp) {
				flag = true;
				i--;
				break;
			}
		}
		if (!flag)
		{
			ball[i] = temp;
		}
		flag = false;
	}
	//蓝球
	ball[6] = rand() % 33 + 1;

	printf("双色球编号为:");
	print(7,ball);

	return 0;
}

void print(int num,int arr[])
{
	for (int i = 0; i < num; i++)
	{
		printf("%d\n",arr[i]);
	}
}