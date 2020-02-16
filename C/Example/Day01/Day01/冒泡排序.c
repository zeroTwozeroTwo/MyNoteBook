#include<stdio.h>

void print(int array[],int len);

int main()
{
	//定义数组
	int arrays[10] = { 0 };
	//数组长度
	int len = sizeof(arrays) / sizeof(arrays[0]);

	//循环输入
	for (int i = 0; i < len; i++)
	{
		scanf_s("%d", &arrays[i]);
	}

	//打印
	//print(arrays, len);
	printf("=======================\n");

	//冒泡排序
	for (int i = 0; i < len - 1; i++)//外层是排序的轮次
	{
		for (int j = 0; j < len - i - 1;j++)//内层的排序的次数
		{
			if (arrays[j] > arrays[j + 1])
			{
				int temp = arrays[j];
				arrays[j] = arrays[j + 1];
				arrays[j + 1] = temp;
			}
		}
	}

	//打印
	print(arrays, len);

	return 0;
}
//传递的是首地址,
void print(int arrays[],int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n",arrays[i]);
	}
}