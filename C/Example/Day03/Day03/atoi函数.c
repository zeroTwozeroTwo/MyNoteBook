#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ַ���ת������������
int main()
{
	char arr[] = "3.14159267";
	//ת��Ϊ����
	//int a = atoi(arr);

	//ת��Ϊlong 
	//long a = atol(arr);

	//ת��Ϊfloat
	float a = atof(arr);

	printf("%f",a);

	return 0;
}