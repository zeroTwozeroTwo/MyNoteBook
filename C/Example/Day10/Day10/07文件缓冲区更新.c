#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	printf("请输入文件名:\n");

	char fileName[256];
	scanf("%s", fileName);
	getchar();


	FILE* src = fopen(fileName, "w");

	if (!src)
	{
		return -1;
	}

	char buf[1024];

	getchar();
	
	while (1)
	{
		fgets(buf, 1024, stdin);
		if (strncmp("comm=exit", buf, 9))
		{
			break;
		}
		fputs(buf, src);
		fflush(src);
	}
	fclose(src);
	return 0;
}