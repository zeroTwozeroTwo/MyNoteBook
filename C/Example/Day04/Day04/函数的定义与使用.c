#include<stdio.h>

void bubble(int arr[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void print(int arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int main() {

	int arr[] = { 1,5,8,7,9,6,3,4,10,2 };
	//������Ϊ���������������˻�Ϊ������(�����˻�Ϊָ��)
	bubble(arr, 10);

	print(arr, 10);
	return 0;
}