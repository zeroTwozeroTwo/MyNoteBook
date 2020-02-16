#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//字符串标准输入输出
int main()
{

	char ch[100];

	//getchar();//获取一个字符
	
	gets(ch);//获取字符串 以回车为结束。允许包含空格 与scanf不同

	puts(ch);//输出字符串，自动换行.


	//printf("%s",ch);



	return 0;
}