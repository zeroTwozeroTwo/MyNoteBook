#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	/*
	//���ַ�����ƥ���ַ�
	char chars[] = "hello world";
	char ch = 'l';
	//���ַ����в����ַ�
	//ƥ���ַ���һ�γ��ֵ�λ��
	//��������ƥ����ַ�����Ҫƥ����ַ�

	 char * p = strchr(chars,ch);

	 printf("%s",p);*/


	//���ַ�����ƥ���ַ���
	//����:��ƥ����ַ�����Ҫƥ����ַ���

	char chars[100] = "���,C����";
	char ch[10] = "C";

	char * p = strstr(chars,ch);
	printf("%s",p);
	return 0;
}