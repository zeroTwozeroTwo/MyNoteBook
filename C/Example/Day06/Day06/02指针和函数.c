#include<stdio.h>

int main()
{

	int a = 10;
	int b = 20;

	tab(&a, &b);

	printf("%d   %d",a,b);

	return 0;
}

//ֱ�ӻ���
//int tab(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

//ָ�뻥��
int tab(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

