#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{
	printf("��������Ҫ�鿴���ļ�:\n");

	char fileName[256];

	scanf("%s", fileName);
	getchar();

	FILE* fp = fopen(fileName, "r");

	if (!fp)
	{
		return -1;
	}
	char ch;

	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c",ch);
	}


	fclose(fp);


	return 0;
}