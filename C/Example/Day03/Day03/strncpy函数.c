#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ַ������޿���
int main()
{
	char ch1[] = "hello world";
	char ch2[100];

	//����:Ŀ���ַ�����Դ�ַ�����Ҫ�������ַ�������
	strncpy(ch2,ch1,5);//���޿������´��\0���ַ�����
	//ch2[5] = 0;
	ch2[5] = '\0';//��Ҫ�ֶ���
	printf("%s",ch2);

	return 0;
}