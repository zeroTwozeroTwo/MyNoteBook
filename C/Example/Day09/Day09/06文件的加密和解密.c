#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


//����:  ��Դ�ļ��ж�ȡ�ַ� ���м��� ����һ�����ļ�
//����:  �Ӽ����ļ��ж�ȡ�ַ� ���н��� ���Դ�ļ�
int main01()
{

	//����
	FILE* src = fopen("D:\\src.txt","r");
	FILE* dest = fopen("D:\\dest.txt", "w");

	if (!src || !dest)
	{
		return -1;
	}

	//��Դ�ļ����� ֱ��EOF
	char ch;
	while ((ch = fgetc(src)) != EOF)
	{
		ch++;
		fputc(ch, dest);
	}

	fclose(dest);
	fclose(src);

	return 0;
}

int main()
{
	//����
	FILE* src = fopen("D:\\dest.txt", "r");
	FILE* dest = fopen("D:\\srcn.txt", "w");

	if (!src || !dest)
	{
		return -1;
	}

	char ch;
	while ((ch = fgetc(src)) != EOF)
	{
		ch--;
		fputc(ch,dest);
	}

	fclose(dest);
	fclose(src);

	return 0;
}