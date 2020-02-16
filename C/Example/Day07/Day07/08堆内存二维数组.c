#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sort(int* p, int num);


int main()
{
	int** p = (int**)malloc(sizeof(int*) * 1);
	p[0] = (int*)malloc(sizeof(int) * 3);
	/*p[1] = (int*)malloc(sizeof(int) * 3);
	p[2] = (int*)malloc(sizeof(int) * 3);*/

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", *(p + i) + j);
		}
	}

	sort(p[0], 3);
	//sort(p + 1, 3);
	//sort(p + 2, 3);

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", *(*(p + i) + j));
		}
	}

	free(p[0]);
	/*free(p[1]);
	free(p[2]);*/
	free(p);


	return 0;
}

//int sort(int** p, int num)
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j < num - i - 1; j++)
//		{
//			if (*(*(p + i) + j) > * (*(p + i) + j + 1))
//			{
//				int* temp = *(p + i) + j;
//				*((p + i) + j) = *((p + i) + j + 1);
//				*((p + i) + j + 1) = temp;
//			}
//		}
//	}
//}
	
int sort(int* p, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (*(p + j) > * (p + j + 1))
			{
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}