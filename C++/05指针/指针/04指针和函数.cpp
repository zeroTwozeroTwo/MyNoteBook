#include <iostream>
using namespace std;

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char* argv[])
{
	//ָ��ͺ���,
	//1.ֵ����
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//2. ��ַ����
	//��ַ���ݿ����޸�ʵ��
	swap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
