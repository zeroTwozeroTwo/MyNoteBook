#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct tec
{
	char* name;
	int age;
}t;

int main()
{
	struct tec* p = (struct tec*)malloc(sizeof(t));
	p->name = (char*)malloc(sizeof(char) * 20);

	strcpy(p->name, "ÍõÎå");
	p->age = 18;
	printf("%s   %d", p->name, p->age);



	if (p->name)
	{
		free(p->name);
		p->name = NULL;
	}

	if (p)
	{
		free(p);
		p = NULL;
	}


	/*free(p->name);
	free(p);*/

	return 0;
}