#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{


	//�����ݸ�ʽ������뵽�ַ�����
	/*int a = 123;
	char chars[] = "hello";
	char dest[100];*/
	//sprintf(dest,"%s%d",chars,a);
	//printf("%s",dest);

	//���ַ�������ȡ������
	int a = 0;
	char chars[100];
	char dest[100] = "hello123";
	sscanf(dest,"%[a-z]%d",chars,&a);

	printf("%s\n",chars);
	printf("%d\n", a);


	return 0;
}