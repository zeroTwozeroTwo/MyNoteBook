#include<stdio.h>
#include<string.h>

char* mystrchar(char* arr, char ch);


int main()
{
	char arr[] = "hello world";
	char ch = 'o';

	char* p = mystrchar(arr, ch);

	printf("%s\n", p);

	return 0;
}

//���鷽ʽ
//char* mystrchar(char* arr, char ch)
//{
//	int index = 0;
//	while (arr[index] != '\0')
//	{
//		if (arr[index] == ch)
//		{
//			return &arr[index];
//		}
//		index++;
//	}
//	return NULL;
//}

//ָ�뷽ʽ
char* mystrchar(const char* arr, char ch)
{
	char* p = arr;
	while (*p != '\0')
	{
		if (*p == ch)
		{
			return p;
		}
		p++;
	}
	return NULL;
}