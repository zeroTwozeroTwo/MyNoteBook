#include<stdio.h>

int main()
{

	int a = 10;
	int b = 20;

	tab(&a, &b);

	printf("%d   %d",a,b);

	return 0;
}

//Ö±½Ó»¥»»
//int tab(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

//Ö¸Õë»¥»»
int tab(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

