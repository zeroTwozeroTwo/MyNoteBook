#include<stdio.h>


int main()
{
	int a = 10;
	int b = 100;
	//ָ����һ���������� p��ָ�����ͱ���������ָ��һ�������ĵ�ַ
	int* p = &a;


	p = &b;

	printf("%p\n", &b);
	printf("%p\n", p);

	//ͨ��ָ���޸ı�����ֵ
	*p = 200;
	printf("%d\n", b);
	printf("%d\n", *p);

	//sizeof()ָ���������ڴ��еĴ�С	��32λ����ϵͳ������ָ���СΪ4���ֽڴ�С
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(p));


	return 0;
}