#include<stdio.h>
#include<string.h>

//1.数组作为函数参数可以退化为指针
//2.在传递数组时,需要传递数组的长度

void print(char* arr);

int main()
{
	/*
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };*/
	char arr[] = "hello world";

	printf(arr);

	return 0;
}

//void print(int* arr, int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//}

void print(char* arr)
{
	int len = strlen(arr);
}