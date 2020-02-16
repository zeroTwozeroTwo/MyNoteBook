#include<stdio.h>



int main()
{
	int a = 10;
	//int* p = &a;

	void* p = &a;

	*(int*)p = 100;


	return 0;
}