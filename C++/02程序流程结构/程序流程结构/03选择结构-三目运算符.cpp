#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//��Ŀ�����
	//������������a b c
	//��a��b���Ƚ�,���������ֵ��ֵ������
	int a = 10;
	int b = 20;
	int c = 0;
	c = a > b ? a : b;
	cout << "c=" << c << endl;
	
	return 0;
}
