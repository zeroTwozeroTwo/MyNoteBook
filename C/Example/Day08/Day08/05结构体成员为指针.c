#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct stuinfo
{
	char* name;
	int age;
};


int main()
{
	struct stuinfo si;
	si.name = (char*)malloc(sizeof(char) * 21);

	strcpy(si.name,"уехЩ");

	si.age = 18;

	printf("%s   %d", si.name,si.age);

	free(si.name);

	return 0;

}