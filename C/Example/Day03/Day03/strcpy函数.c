#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//�ַ�������
int main()
{

	char ch1[] = "hello world";
	char ch2[100];


	//����:Ŀ���ַ���,Դ�ַ���
	strcpy(ch2,ch1);//��\0���� �ɹ����ص�ַ��ʧ�ܷ���null

	printf("%s",ch2);

	return 0;
}