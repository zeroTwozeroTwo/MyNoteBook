#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//1.����ָ��
	int a = 10;
	//ָ�붨����﷨: ��������* ָ�������;
	int* p;
	p = &a;
	cout << "a�ĵ�ַΪ:" << &a << endl;
	cout << "ָ��pΪ:" << p << endl;

	//2.ʹ��ָ��
	//����ʹ�ý����õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ�� * ���������,�ҵ�ָ��ָ����ڴ��е�����
	*p = 1000;

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	return 0;
}
