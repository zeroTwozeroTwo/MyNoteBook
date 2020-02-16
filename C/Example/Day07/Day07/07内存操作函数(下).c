#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main01()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//memmove拷贝重叠内存地址不会出现错误 但是效率比较低 如果没有重叠两个函数效率一样
	memmove(&arr[2], arr, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",arr[i]);
	}

	return 0;
}

int main()
{
	//int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//int arr2[5] = { 1,2,3,4 };

	//int value = memcmp(arr1, arr2, 16);

	//printf("%d\n",value);

	int* p1 = malloc(sizeof(int) * 10);

	char* p2 = malloc(sizeof(char) * 40);

	memcpy(p1, "hello", 6);
	memcpy(p2, "hello", 6);

	if (!memcmp(p1, p2, 6))
	{
		printf("内容相同");
	}
	else
	{
		printf("内容不相同");
	}

	free(p1);
	free(p2);


	return 0;
}