#include<stdio.h>


int main()
{
	int a = 10;
	a = 20;

	int b = 100;


	int* p;

	p = &a;//´æ´¢µÄµØÖ·
	p = &b;

	*p = 30;


	printf("%d\n",a);
	printf("%d\n",*p);

	return 0;
}