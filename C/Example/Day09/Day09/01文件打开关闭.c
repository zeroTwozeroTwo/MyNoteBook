#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main01()
{
	//ע��:�ļ�����ָ�� ����Ҫ�û�����
	//  aΪ׷��
	FILE* fp = fopen("D:\\a.txt", "r");

	if (fp == NULL)
	{
		//1.�Ҳ����ļ� 2.û��Ȩ�� 3.������ļ���������
		printf("�ļ���ʧ��");
		return -1;
	}

	//�ļ�����
	printf("�ļ��򿪳ɹ�\n");

	////���ַ�д���ļ�
	//fputc('A',fp);


	////���ļ��е�һ���ַ���ȡ����
	//char ch = fgetc(fp);
	//printf("%c\n",ch);

	//ch = fgetc(fp);
	//printf("%c\n",ch);
	
	//��ȡ�ļ���β ������־ EOF -1
	char ch;
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c\n",ch);
	}


	//�ļ��ر�
	fclose(fp);

	return 0;
}


int main()
{
	// w��a�ļ������ھʹ���
	/*
	r ��ֻ����ʽ���ļ� ���ᴴ���ļ�������ļ������ڻᱨ��
	w ��д�ķ�ʽ���ļ� �ļ������ڻᴴ�����ļ� ����ļ����������ݻḲ��ԭʼ����
	a ��׷�ӷ�ʽ���ļ� �ļ������ڻᴴ�����ļ� ���ļ�ĩβ׷������
	*/
	//1.��д����ʽ ���ļ�
	FILE* fp = fopen("D:\\a.txt", "w");
	//2.�ж��ļ��Ŀ�����

	//3.д�ļ�
	//4.�ر��ļ�



	return 0;
}