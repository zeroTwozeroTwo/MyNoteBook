#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main01()
{
	//int* p = (int*)malloc(sizeof(int) * 10);
	////����1��Ŀ���ַ ����2:���õ�ֵ ����3:���õ��ڴ��ֽ�
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
	//�����ڴ��ֵ
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
	////����1��Ҫ�����ĵ�ַ ����2���������ĵ�ַ ����3��Ҫ�������ֽ���
	//memcpy(p, arr, 40);

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n",p[i]);
	//}

	//free(p);

	//�����ĵ�ַ��Դ��ַ������Ҫ�ص���������ܷ�������.
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


	//1.����������ͬ
	//2.strcpy�����ַ��� memcpy���Կ���һ���ڴ�
	//3.����������־��ͬ strcpy \0��β memcpy�Ը���Ϊ��β
	strcpy();
	memcpy();
	return 0;
}
