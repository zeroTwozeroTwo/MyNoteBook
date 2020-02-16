#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	1.�������ļ�
	2.�жϿ�����
	3.ѭ����ȡ
	4.��ʽ���ַ��� sscanf() ������
	5.�ŵ�Ŀ���ļ���
	6.�ر��ļ�
*/

/*
�ַ�����׼�������
scanf() printf()

��ʽ���ַ���
sscanf() sprintf()

��ʽ���ļ���д
fscanf()  fprintf()

*/

int main()
{
	FILE* src = fopen("D:\\test.txt", "r");
	FILE* dest = fopen("D:\\result.txt", "w");

	if (!src || !dest)
	{
		return -1;
	}

	int a, b;
	char c;
	int value = 0;
	char buf[50];
	for (int i = 0; i < 100; i++)
	{
		memset(buf, 0, 50);
		fgets(buf, 50, src);
		sscanf(buf, "%d%c%d=", &a, &c, &b);
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
		/*	memset(buf, 0, 50);
			sprintf(buf, "%d%c%d=%d   ---------��%d��\n", a, c, b, value, i + 1);
			fputs(buf, dest);*/

			//����ʽ���õ��ַ���д���ļ���
		fprintf(dest, "%d%c%d=%d ------��%d��\n", a, c, b, value, i + 1);
	}

	fclose(src);
	fclose(dest);

	return 0;
}