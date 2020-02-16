#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* arr[] = { &a,&b,&c };
//	//arr[0] = &a;
//	*arr[0] = 100;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("c=%d\n", c);
//
//	return 0;
//}


int main()
{
	//存储char* 类型的地址数组
	char* arr[] = { "hello","world","wobu","hao" };

	//printf("%c\n", *(arr[0] + 1));
	printf("%c\n", *(arr[1] + 2));



	return 0;
}

