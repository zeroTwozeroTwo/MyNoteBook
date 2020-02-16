#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main01()
{
	FILE* src = fopen("D:\\printf.txt", "w");
	if (!src)
	{
		return -1;
	}

	fprintf(src, "%d+%d=%d\n", 1, 2, 3);

	fclose(src);

	return 0;
}

int main02()
{
	FILE* src = fopen("D:\\printf.txt", "r");

	if (!src)
	{
		return -1;
	}

	int a, b, c;

	fscanf(src, "%d+%d=%d\n", &a, &b, &c);

	printf("%d  %d   %d", a, b, c);

	fclose(src);

	return 0;
}

int main()
{
	FILE* src = fopen("D:\\test.txt", "r");

	if (!src)
	{
		return -1;
	}

	int a, b;
	char ch;
	char buf[1024];
	for (int i = 0; i < 100; i++)
	{
		fscanf(src, "%d%c%d=", &a, &ch, &b);
		/*fgets(buf, 1024, src);*/
		printf("%d%c%d=\n", a, ch, b);
	}





	return 0;
}