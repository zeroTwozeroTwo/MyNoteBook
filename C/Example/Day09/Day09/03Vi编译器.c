#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

	/*
	1.ָ��һ���ļ���
	2.���ļ� w
	3.�ж��ļ�������
	4.ѭ��¼������
	5.�˳�����
	6.���ַ���д���ļ���
	7.�ر��ļ�
	*/

	printf("������һ��Ҫ�������ļ���:\n");

	char fileName[256];

	scanf("%s", fileName);
	//ע������:�������ջ���
	getchar();

	FILE* fp = fopen(fileName,"w");

	if (!fp)
	{
		return -1;
	}

	//ѭ��¼��
	char buf[1024];
	while (1)
	{
		memset(buf, 0, 1024);
		
		fgets(buf, 1024, stdin);
		
		//�˳�����
		//zz=exit
		if (!strncmp("zz=exit", buf, 7))
		{
			break;
		}

		int i = 0;
		while (buf[i])
		{
			fputc(buf[i++],fp);
		}	
		//���»�����
		fflush(fp);
	}

	fclose(fp);

	return 0;
}