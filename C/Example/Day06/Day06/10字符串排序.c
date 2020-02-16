#include<stdio.h>


//字符串排序 根据字符串首字母排序 按照 a-z顺序排序
void bubble(char** arr, int len);


int main()
{
	char* arr[] = { "student","tree","new","bee" };

	//printf("%p\n",arr);

	bubble(arr, 4);

	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", arr[i]);
	}

	return 0;
}

void bubble(char** arr, int len)
{
	//printf("%p\n",arr);
	//printf("%d\n",*arr);
	//printf("%d\n",**arr+1);
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//比对两个字符串的首字母大小
			//指针情况
			/*if (**(arr + j) > **(arr + j + 1))
			{
				char* temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}*/
			//数组情况
			/*if (arr[j][0] > arr[j + 1][0])
			{
				char* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}*/
			//一半数组一半指针
			if (*arr[j] > * arr[j + 1])
			{
				char* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}