#include <iostream>
using namespace std;
#include "swap.h"

//�����ķ��ļ���д
//ʵ���������ֽ��н����ĺ���

////����������
///
///
//void swap(int a, int b);

//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

int main(int argc, char* argv[])
{
	int a = 10;
	int b = 20;
	swap(10, 20);
	return 0;
}

//1.����.h��׺����ͷ�ļ�
//2.����.cpp��׺����Դ�ļ�
//3.��ͷ�ļ���д����������
//4.��Դ�ļ���д�����Ķ���
