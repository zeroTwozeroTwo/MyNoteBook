#include<stdio.h>

void bubble(int* p, int len);


int main()
{

	int arr[10] = { 4,9,8,7,5,6,1,3,2,10 };
	//数组名和指针的区别，数组名通过sizeof，可以求出数组大小，指针只包含数组的首地址信息
	int* p = arr;

	int len = sizeof(arr) / sizeof(arr[0]);

	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(p));

	bubble(p, len);

	for (int i = 0; i < len; i++)
	{
		printf("%d\n",arr[i]);
	}

	return 0;
}

void bubble(int* p, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (*(p + j) > * (p + j + 1))
			{
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}