#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//����
	//1.������
	short num1 = 10;
	//2.����
	int num2 = 10;
	//3.������
	long num3 = 10;
	//4.��������
	long long num4 = 10;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	//sizeof���������ʹ�С
	cout << "short �ڴ��СΪ:" << sizeof(short) << endl;
	cout << "int �ڴ��СΪ:" << sizeof(int) << endl;
	cout << "long �ڴ��СΪ:" << sizeof(long) << endl;
	cout << "long long �ڴ��СΪ:" << sizeof(long long) << endl;
	return 0;
}
