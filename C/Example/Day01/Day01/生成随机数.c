

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i <= 10; i++)
	{
		int number = rand() % 100 + 1;
		printf("%d\n", number);
	}
	return 0;
}