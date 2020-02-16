#include<stdio.h>

void print(int arrays[], int len);


//选择排序
int main()
{
	//定义数组
	int arrays[3] = { 0 };
	//数组长度
	int len = sizeof(arrays) / sizeof(arrays[0]);
	//循环输入
	for (int i = 0; i < len; i++)
	{
		scanf_s("%d", &arrays[i]);
	}

	for (int i = 0; i < len - 1; i++)//外循环，控制一共比较了多少次
	{
		for (int j = i + 1; j < len; j++)//类循环，每次比较多少个元素
		{
			if (arrays[i] > arrays[j])
			{
				int temp = arrays[i];
				arrays[i] = arrays[j];
				arrays[j] = temp;
			}
		}
	}
	printf("=====================\n");
	print(arrays, len);
	return 0;
}

//遍历数组
void print(int arrays[],int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arrays[i]);
	}
}