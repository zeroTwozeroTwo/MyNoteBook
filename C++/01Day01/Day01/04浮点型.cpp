#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//1. ������ float
	//2. ˫���� double
	//Ĭ�������,���һ��С��,����ʾ6λ��Ч����
	float f1 = 3.1415926f;

	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1=" << d1 << endl;

	//ͳ��float��double���ڴ�ռ�
	cout << "float ռ���ڴ�ռ�Ϊ:" << sizeof(float) << endl;
	cout << "double ռ���ڴ�ռ�Ϊ:" << sizeof(double) << endl;
	return 0;
}
