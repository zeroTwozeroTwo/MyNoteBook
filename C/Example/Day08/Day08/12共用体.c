#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//������ union ����������  ��Ա�б�  �����������
union vars
{
	double a;
	float b;
	int c;
	short d;
	char f;
	char arr[12];
}var;

int main()
{
	//printf("%d\n",sizeof(var));
	var.a = 100;
	var.b = 3.14;
	var.c = 66;
	printf("%f\n",var.a);
	printf("%f\n",var.b);
	printf("%d\n",var.c);

	return 0;
}