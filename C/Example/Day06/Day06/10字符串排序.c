#include<stdio.h>


//�ַ������� �����ַ�������ĸ���� ���� a-z˳������
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
			//�ȶ������ַ���������ĸ��С
			//ָ�����
			/*if (**(arr + j) > **(arr + j + 1))
			{
				char* temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}*/
			//�������
			/*if (arr[j][0] > arr[j + 1][0])
			{
				char* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}*/
			//һ������һ��ָ��
			if (*arr[j] > * arr[j + 1])
			{
				char* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}