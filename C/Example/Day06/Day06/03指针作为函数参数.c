#include<stdio.h>
#include<string.h>

//1.������Ϊ�������������˻�Ϊָ��
//2.�ڴ�������ʱ,��Ҫ��������ĳ���

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