#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };

	int* p = arr;




	p++;
	*p = 100;

	for (int i = 0; i < 10; i++)
	{
		//*(p+1)  内存地址变了1*sizeof(int)
		printf("%d\n", arr[i]);
		//printf("%d\n",p[i]);
		//printf("%d\n", *(p + i));
	}
	
	return 0;
}