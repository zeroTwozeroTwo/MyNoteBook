#include<stdio.h>


int main()
{
	int arr[3] = { 1,2,3 };
	char* p = arr;
	*(int*)p = 1000;
	*((int*)p + 1) = 2000;
	*((int*)p + 2) = 3000;


	printf("%d\n",arr[2]);

	return 0;
}