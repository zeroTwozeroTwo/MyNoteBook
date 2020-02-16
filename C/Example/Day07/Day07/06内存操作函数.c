#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main01()
{
	//int* p = (int*)malloc(sizeof(int) * 10);
	////参数1：目标地址 参数2:重置的值 参数3:重置的内存字节
	//memset(p, 0, 40);

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n",p[i]);
	//}

	//free(p);
/*
	char* p = malloc(sizeof(char) * 10);

	memset(p, 0, 10);

	printf("%s\n", p);
	free(p);*/


	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//重置内存的值
	memset(arr, 0, 40);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}


int main02()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//int* p = malloc(sizeof(int) * 10);
	////参数1：要拷贝的地址 参数2：被拷贝的地址 参数3：要拷贝的字节数
	//memcpy(p, arr, 40);

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n",p[i]);
	//}

	//free(p);

	//拷贝的地址与源地址尽量不要重叠，否则可能发生错误.
	memcpy(&arr[2], arr, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}

int main03()
{
	char arr[] = { 'h','e','l','l','o' };
	char* p = malloc(100);


	//1.函数参数不同
	//2.strcpy拷贝字符串 memcpy可以拷贝一块内存
	//3.拷贝结束标志不同 strcpy \0结尾 memcpy以个数为结尾
	strcpy();
	memcpy();
	return 0;
}
