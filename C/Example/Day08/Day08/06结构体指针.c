#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stuinfo
{
	char* name;
	int age;
}stu;


int main()
{
	struct stuinfo* si = &stu;
	si->name = (char*)malloc(sizeof(char) * 20);
	si->age = 18;
	strcpy(si->name,"ÀîËÄ");

	printf("%s   %d",si->name,si->age);


	free(si->name);


	return 0;
}