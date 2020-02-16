#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//字符串追加 
int main()
{

	char ch1[100] = "hello ";
	char ch2[] = "world";

	//参数:目标字符串，源字符串。
	//strcat(ch1, ch2);

	//有限追加  参数:目标字符串，源字符串，要追加的字符长度 
	//      被追加的字符串，追加的字符串
	strncat(ch1,ch2,3);//\0也会一起追加过去


	printf("%s",ch1);



	return 0;
}