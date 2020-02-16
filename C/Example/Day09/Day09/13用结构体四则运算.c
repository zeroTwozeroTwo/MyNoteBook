#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct opter
{
	int a;
	int b;
	char c;
	float value;
};

typedef struct opter opt;

int main()
{
	opt* p = (opt*)malloc(sizeof(opt) * 100);

	FILE* file = fopen("D:\\test.txt", "r+");

	if (!file)
	{
		return -1;
	}

	for (int i = 0; i < 100; i++)
	{
		fscanf(file, "%d%c%d=\n", &p[i].a, &p[i].c, &p[i].b);
		printf("%d%c%d\n", p[i].a, p[i].c, p[i].b);
		switch (p[i].c)
		{
		case '+':
			p[i].value = p[i].a + p[i].b;
			printf("结果:%f\n", p[i].value);
			break;
		case '-':
			p[i].value = p[i].a - p[i].b;
			printf("结果:%f\n", p[i].value);
			break;
		case '*':
			p[i].value = p[i].a * p[i].b;
			printf("结果:%f\n", p[i].value);
			break;
		case '/':
			p[i].value = p[i].a * 1.0 / p[i].b;
			printf("结果:%f\n", p[i].value);
			break;
		default:
			break;
		}
	}

	fclose(file);

	file = fopen("D:\\test.txt", "r+");

	if (!file)
	{
		return -1;
	}

	for (int i = 0; i < 100; i++)
	{
		fprintf(file, "%d%c%d=%f\n", p[i].a, p[i].c, p[i].b, p[i].value);
	}

	fclose(file);

	free(p);

	return 0;
}