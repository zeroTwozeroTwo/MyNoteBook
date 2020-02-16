#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>//头文件，处理可变参
#include<string.h>



double add(int num, ...);
void string(int num, ...);


int main()
{
	
	string(5,"note","pa","aa","aa","aabb");


	/*double result = 0.0;

	result = add(5, 1.2, 4.2, 4.6, 4.9, 5.6);

	printf("结果为:%f",result);*/
	return 0;
}
//可变参数最少自己要定义一个参数
//接受数值
double add(int num,...)
{
	double last = 0.0;
	va_list argp;//创建一个char类型指针
	va_start(argp,num);//从这开始读取num个参数，并把地址放在argp里面

	for (int i = 0; i < num; i++)
	{
		double temp = va_arg(argp, double);
		last += temp;
		printf("%f\n",temp);//读取参数，挨个读取
	}

	va_end(argp);

	return last;
}
//接受字符并打印
void string(int num,...)
{
	va_list argp;//创建指针保存地址

	va_start(argp,num);//读取num个参数

	char str[100];//保存读取的字符串

	for (int i = 0; i < num; i++)
	{
		strcpy(str,va_arg(argp,char*));//按照字符串方式读取一个参数，然后拷贝到str
		printf("%s\n",str);

	}

	va_end(argp);//结束调用
}