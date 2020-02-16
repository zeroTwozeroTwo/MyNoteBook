#include<stdio.h>


int main()
{
	int a = 10;
	int* p = &a;

	int** p1 = &p;

	**p1 = 100;

	printf("%d\n",a);


	return 0;
}