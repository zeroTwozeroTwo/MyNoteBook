#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>


int main()
{

	//char ch[] = "hello";//默认补个\0标识结束

	//printf("%s\n",ch);

	//char ch1[] = { 'h','e','l','l','o' };//数组类型的不会主动补\0

	//char ch2[100];

	//scanf("%[^\n]",ch2);

	//printf("%s",ch2);


	char ch1[] = "hello";
	char ch2[] = "world";

	char arr[20];

	//字符串拼接
	int index = 0;

	while (ch1[index] != '\0')
	{
		arr[index] = ch1[index];
		index++;
	}

	printf("index长度:%d\n",index);

	while (ch2[index-5] != '\0')
	{
		arr[index] = ch2[index - 5];
		index++;
	}

	//添加字符串结束标识
	arr[index] = '\0';

	printf("%s",arr);
	return 0;
}