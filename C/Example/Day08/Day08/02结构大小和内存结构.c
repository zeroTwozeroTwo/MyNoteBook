#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//�ṹ����Ҫ�����������ͽ����ڴ����
/*
	ע��:
	�����������͵Ĵ�С���ڴ��д洢�ĵ�ַһ�����������͵ı���.

	�����ṹ�彨�飬���������ʹ��ϵ���(��ķ�����,С�ķ�����)
*/
struct students
{
	char name[20];//20
	unsigned int age;//4
	char tel[15];//15
	char sex;//1
	float score[3];//12
}stu;

int main()
{

	printf("%d\n", sizeof(float));
	printf("�ṹ���С:%d\n",sizeof(stu));

	return 0;
}