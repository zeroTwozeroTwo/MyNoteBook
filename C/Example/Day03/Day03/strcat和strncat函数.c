#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ַ���׷�� 
int main()
{

	char ch1[100] = "hello ";
	char ch2[] = "world";

	//����:Ŀ���ַ�����Դ�ַ�����
	//strcat(ch1, ch2);

	//����׷��  ����:Ŀ���ַ�����Դ�ַ�����Ҫ׷�ӵ��ַ����� 
	//      ��׷�ӵ��ַ�����׷�ӵ��ַ���
	strncat(ch1,ch2,3);//\0Ҳ��һ��׷�ӹ�ȥ


	printf("%s",ch1);



	return 0;
}