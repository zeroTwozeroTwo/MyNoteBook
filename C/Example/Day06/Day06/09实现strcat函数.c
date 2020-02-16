#include<stdio.h>
#include<string.h>

int main()
{
	char arr[100] = "hello";
	char* s = "world";

	mystrcat(arr, s);


	return 0;
}

void mystrcat(char* dest, char* src)
{
	//while (*dest)
	//{
	//	dest++;
	//}
	//while (*dest++ = *src++);

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
}