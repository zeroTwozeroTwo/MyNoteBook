#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�Ƚ��ַ�ASCII���С

int main()
{

	/*
	strcmp

	����ֵ: int ����
	��ȣ�0
	���ڣ�> 0
	С�ڣ�< 0
	�ڲ�ͬ��ϵͳ�п��ܷ���ֵ��ͬ
	*/

	char ch1[20] = "hello";
	char ch2[20] = "hello";

	/*int value = strcmp(ch1, ch2);

	if (value == 0)
	{
		printf("���");
	}*/

	//�ַ����ޱȽ�
	int value = strncmp(ch1,ch2,3);//���Ҫ�Ƚϵĳ��ȳ������ַ����ĳ��Ȼ�����\0֮ǰ��Ϊ��׼

	printf("%d", value);

	//printf("%d",value);
	return 0;
}