#include <iostream>
using namespace std;

void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main(int argc, char* argv[])
{
	//1.�ȴ�������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//����ĳ���
	int len = sizeof(arr) / sizeof(int);
	//��������,ʵ��ð������
	bubbleSort(arr, len);
	//��ӡ�����Ľ��
	printArray(arr, len);
	return 0;
}
