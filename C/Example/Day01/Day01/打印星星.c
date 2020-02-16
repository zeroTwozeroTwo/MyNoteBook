#include<stdio.h>


int main()
{
	int cell = 0;
	printf("要打印多少层？:");
	scanf_s("%d", &cell);


	for (int i = 1; i <= cell; i++)
	{
		for (int j = cell-i; j >=0; j--)
		{
			printf(" ");
		}
		
		for (int k = 0; k < (i * 2) - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}