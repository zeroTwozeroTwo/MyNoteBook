#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
	
	struct stat s;

	stat("D:\\src.txt", &s);

	printf("�ļ��ֽڴ�С:%d\n", s.st_size);

	return 0;
}