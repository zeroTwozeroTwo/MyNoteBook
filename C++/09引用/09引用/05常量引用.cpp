#include <iostream>
using namespace std;

//��ӡ���ݺ���
void showValue(const int &val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

int main(int argc, char* argv[])
{

	//��������
	//ʹ�ó���:���������β�,��ֹ�����
	//int a = 10;

	//����const֮�� �������������޸� int temp = 10; int & ref2 = temp;
	const int& ref2 = 10;
	//ref2 = 20;//����const֮���Ϊֻ�� �������޸�
	
	//int& ref = a;//���ñ�������һ��Ϸ����ڴ�ռ�

	int a = 100;
	showValue(a);
	cout << "val = " << a << endl;
	return 0;
}
