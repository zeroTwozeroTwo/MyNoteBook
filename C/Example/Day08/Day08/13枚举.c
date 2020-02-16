#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


enum colors
{
	red, bule, yellow, balck, white, green
}color;

int main()
{
	int value;

	scanf("%d", &value);

	switch (value)
	{
	case red:
		printf("ºìÉ«\n");
		break;
	case bule:
		printf("À¶É«\n");
		break;
	case yellow:
		break;
	case balck:
		break;
	case white:
		break;
	case green:
		break;
	default:
		break;
	}

	return 0;
}