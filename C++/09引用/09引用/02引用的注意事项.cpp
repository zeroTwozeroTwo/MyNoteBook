#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//1.���ñ����ʼ��
	int a = 10;
	//int& b; // ����,����Ҫ��ʼ��
	int& b = a;
	//2.�����ڳ�ʼ����,�����Ըı�
	int c = 20;

	b = c;//��ֵ����,�����Ǹ�������
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return 0;
}
