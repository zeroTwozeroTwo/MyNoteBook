#include <iostream>
using namespace std;

//��������


//1.ֵ����
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}

//2.��ַ����
void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.���ô���
void swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main(int argc, char* argv[])
{
	int a = 10;
	int b = 20;
	//swap01(a, b);//ֵ����,�ββ�������ʵ��

	//swap02(&a, &b);//��ַ����,�βλ�����ʵ��

	swap03(a, b);//���ô���,�βλ�����ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
