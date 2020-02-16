#include<stdio.h>


int main()
{
	//定义数组
	int arrays[5] = { 1,2,3,4,5 };
	
	//数组实际长度。从零开始
	int len = sizeof(arrays) / sizeof(arrays[0]);
	int j = 1;

	//遍历
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arrays[i]);
	}
	printf("\n");
	//数组逆序
	for (int i = 0; i <= len / 2; i++)
	{
		int temp = arrays[i];
		arrays[i] = arrays[len - j];
		arrays[len - j] = temp;
		j++;
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d\t",arrays[i]);
	}

	return 0;
}