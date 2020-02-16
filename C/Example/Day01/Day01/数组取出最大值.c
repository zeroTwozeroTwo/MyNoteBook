#include<stdio.h>

int main()
{
	//定义数组
	int arrays[10];

	//数组长度
	int len = sizeof(arrays) / sizeof(arrays[0]);

	//循环输入
	for (int i = 0; i < len; i++)
	{
		scanf_s("%d",&arrays[i]);
	}
	int max = 0;
	for (int i = 0; i < len; i++)
	{
		if (max < arrays[i])
		{
			max = arrays[i];
		}
	}

	printf("最大值为:%d",max);

	return 0;
}