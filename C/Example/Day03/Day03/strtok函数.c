#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�и��ַ���
int main()
{
	//������ָ�����ָ���ַ������ָ���ַ���
	char chars[] = "www.baidu.com";
	char * p = strtok(chars,".");
	//���и�㣬��\0��ʾ���ƻ�ԭ���ַ���
	//printf("%s", p);
	while (p != NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, ".");
	}

	return 0;
}