#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main01()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//memmove�����ص��ڴ��ַ������ִ��� ����Ч�ʱȽϵ� ���û���ص���������Ч��һ��
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
		printf("������ͬ");
	}
	else
	{
		printf("���ݲ���ͬ");
	}

	free(p1);
	free(p2);


	return 0;
}