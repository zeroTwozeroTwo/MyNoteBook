#include<stdio.h>

int main()
{
	int arrays[10] = {0};

	//printf("%-*d",2,1);
	//查看数组长度,取出数组在这一片内存的长度，然后除以字节的长度就是数组的长度
	printf("数组长度：%d\n",sizeof(arrays)/sizeof(arrays[0]));

	printf("%d",arrays[5]);

}