#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//字符串标准输入输出
int main()
{

	char arr[100];
	//参数：第一个是字符指针，第二个是大小，第三个是文件流
	fgets(arr,100,stdin);
	//puts会自动换行
	//puts(arr);

	//printf("%s", arr);
	//参数：第一个，字符指针，第二个，流
	fputs(arr,stdout);//不会自动加换行

	return 0;
}