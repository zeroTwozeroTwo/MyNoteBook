#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{
	FILE* fp1 = fopen("", "r");
	FILE* fp2 = fopen("", "w");

	if (!fp1 || !fp2)
	{
		printf("²Ù×÷ÎÄ¼þÊ§°Ü");
	}

	char ch[1024];

	while (!feof(fp1))
	{
		int len = fread(ch, 1, 1024,fp1);
		fwrite(ch, len, 1, fp2);
	}

	fclose(fp1);
	fclse(fp2);

	return 0;
}