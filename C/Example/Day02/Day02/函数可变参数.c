#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>//ͷ�ļ�������ɱ��
#include<string.h>



double add(int num, ...);
void string(int num, ...);


int main()
{
	
	string(5,"note","pa","aa","aa","aabb");


	/*double result = 0.0;

	result = add(5, 1.2, 4.2, 4.6, 4.9, 5.6);

	printf("���Ϊ:%f",result);*/
	return 0;
}
//�ɱ���������Լ�Ҫ����һ������
//������ֵ
double add(int num,...)
{
	double last = 0.0;
	va_list argp;//����һ��char����ָ��
	va_start(argp,num);//���⿪ʼ��ȡnum�����������ѵ�ַ����argp����

	for (int i = 0; i < num; i++)
	{
		double temp = va_arg(argp, double);
		last += temp;
		printf("%f\n",temp);//��ȡ������������ȡ
	}

	va_end(argp);

	return last;
}
//�����ַ�����ӡ
void string(int num,...)
{
	va_list argp;//����ָ�뱣���ַ

	va_start(argp,num);//��ȡnum������

	char str[100];//�����ȡ���ַ���

	for (int i = 0; i < num; i++)
	{
		strcpy(str,va_arg(argp,char*));//�����ַ�����ʽ��ȡһ��������Ȼ�󿽱���str
		printf("%s\n",str);

	}

	va_end(argp);//��������
}