#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
	1.���ļ����жϿ�����
	2.��ȡ���� �ٷŵ��ѿռ���
	3.�ٴδ��ļ� ��ȡ�ѿռ����� д���ļ��� �ر��ļ�
*/

int main()
{
	FILE* file = fopen("D:\\test.txt", "r+");

	if (!file)
	{
		return -1;
	}

	char** buf = (char**)malloc(sizeof(char*) * 100);
	int a, b, value;
	char c;

	for (int i = 0; i < 100; i++)
	{
		buf[i] = (char*)malloc(sizeof(char) * 40);
		//fgets(buf[i],40,file);
		//��ʽ����ȡ
		fscanf(file, "%d%c%d=\n", &a, &c, &b);
		switch (c)
		{
		case '+':
			value = a + b;
			break;
		case '-':
			value = a - b;
			break;
		case '*':
			value = a * b;
			break;
		case '/':
			value = a / b;
			break;
		default:
			break;
		}
		sprintf(buf[i], "%d%c%d=%d\n", a, c, b, value);
	}

	//for (int i = 0; i < 100; i++)
	//{
	//	printf("%s\n",buf[i]);
	//}

	fclose(file);


	//���������д��

	file = fopen("D:\\test.txt", "r+");

	if (!file)
	{
		return -1;
	}

	for (int i = 0; i < 100; i++)
	{
		fputs(buf[i], file);
	}

	fclose(file);

	//�ڴ��ͷ�
	for (int i = 0; i < 100; i++)
	{
		free(buf[i]);
		buf[i] = NULL;
	}

	free(buf);

	return 0;
}