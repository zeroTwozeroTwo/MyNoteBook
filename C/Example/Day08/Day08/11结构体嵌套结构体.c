#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stra 
{
	int a;
	float b;
	char c;
}abc;

struct strb
{
	double d;
	char* e;
	short f;
	struct stra abc;
};


int main()
{
	struct strb strbb;
	strbb.d = 3.19;
	strbb.abc.a = 10;
	strbb.abc.b = 20.5f;

	//printf("%d\n",strbb.abc.a);
	printf("%d\n",10000);
	printf("%d\n",sizeof(strbb));

	return 0;
}