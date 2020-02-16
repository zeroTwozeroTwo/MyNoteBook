#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main01()
{
	//开辟多大堆空间 就要操作多大堆空间
	char* p = (char*)malloc(sizeof(char) * 10);

	//printf("%s\n",p);

	strcpy(p, "hello");

	printf("%s\n",p);


	free(p);

	return 0;
}

int main()
{
	char* p = (char*)malloc(sizeof(char) * 100);



	strcpy(p,"hello world");

	*p = 'A';

	printf("%s\n",p);


	free(p);

	return 0;
}