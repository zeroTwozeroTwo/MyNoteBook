#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
fseek(�ļ���,�ƶ��ֽ�,ģʽ) �ƶ����λ��
ģʽ:
SEEK_SET �ļ���ʼλ�ÿ�ʼ�ƶ�
SEEK_END �ļ���βλ�ÿ�ʼ�ƶ�
SEEK_CRT �Թ�굱ǰλ��Ϊ��׼

ftell(�ļ���)  ��ȡ��굱ǰλ�� ����ֵ��long -1����ʧ��

rewind(�ļ���) ���ù�굽�ļ���ʼλ��

*/

int main01()
{

	char* arr = "hello world";
	FILE* fp = fopen("D:\\h.txt", "w");

	if (!fp)
	{
		return -1;
	}

	fputs(arr, fp);

	fclose(fp);


	return 0;
}

int main()
{
	FILE* fp = fopen("D:\\h.txt", "r");

	if (!fp)
	{
		return -1;
	}

	//SEEK_SET �ļ���ʼλ�ÿ�ʼ�ƶ�
	//SEEK_END �ļ���βλ�ÿ�ʼ�ƶ�
	//fseek(fp, 6, SEEK_SET);
	//fseek(fp, -5, SEEK_END);

	char ch;
	int start_len = ftell(fp);
	printf("%d\n", start_len);
	while ((ch = getc(fp)) != EOF)
	{
		//fseek(fp, 5, SEEK_CUR);
		int len = ftell(fp);
		printf("%c", ch);
		printf("%d\n",len);
	}
	

	fclose(fp);

	return 0;
}