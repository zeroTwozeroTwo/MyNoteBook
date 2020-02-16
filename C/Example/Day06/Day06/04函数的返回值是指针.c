#include<stdio.h>
#include<string.h>

char* test();


int* func()
{
	int a = 100;
	return &a;
}

int main()
{
	//char* p = test();

	int* p = func();


	printf("%d\n", *p);

}
//
//char* test()
//{
//	char* arr = "hello world";
//	return arr;
//}