#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 10

int main()
{
	srand((unsigned int)time(NULL));

	int* p = (int*)malloc(sizeof(int) * MAX);

	for (int i = 0; i < MAX; i++)
	{
		//*(p + i) = rand() % 50;
		p[i] = rand() % 50;
		//*p++ = rand() % 50;
	}

	for (int i = 0; i < MAX - 1; i++)
	{
		for (int j = 0; j < MAX - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < MAX; i++)
	{
		printf("%d\n", p[i]);
	}
	
	free(p);

	return 0;
}