#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	printf("��������һ����Ҫ�������ļ�:\n");

	char fileName[256];

	scanf("%s", fileName);
	getchar();//����һ������

	FILE* fp = fopen(fileName, "w");

	if (fp == NULL)
	{
		return -1;
	}
	//scanf("%[^\n]",buff);
	//fgets();

	char buf[1024];
	while (1)
	{
		//���
		memset(buf, 0, 1024);

		scanf("%[^\n]", buf);
		/*getchar();*/

		/*fgets(buf, 1024, stdin);*/
		//comm=exit����¼�����
		if (strncmp("comm=exit", buf, 9) == 0)
		{
			break;
		}
		int i = 0;
		while (buf[i] != '\0')
		{
			fputc(buf[i++], fp);
			//i++;
		}
	}


	fclose(fp);

	return 0;
}