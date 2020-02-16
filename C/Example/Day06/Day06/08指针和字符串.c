#include<stdio.h>
#include<string.h>

int main01()
{
	char arr[] = "hello world";
	char* p;
	p = arr;
	*p = 'A';//arr[0]
	p++;
	*p = 'B';//arr[1]

	printf("%d\n",sizeof(arr));//12
	printf("%d\n",strlen(arr));//11
	printf("%d\n",strlen(p));//10
	

	printf("%s\n", p);


	return 0;
}

int main()
{
	char* arr = "hello world";//常量区
	char arr1 = "hello world";//栈区
	printf("%s\n",arr);
	printf("%c\n",arr[0]);

	char* p = arr;

	//字符串常量是一个常量的数组 可以读取字符或者字符串但是不能修改。
	//p[0] = 'A';

	p = "hell world";



	return 0;
}