#include <iostream>
using namespace std;

//ռλ����
//����ֵ���� ������(��������)

//Ŀǰ�׶ε�ռλ����,���ǻ��ò���,����Ŀγ��л��õ�
//ռλ������������Ĭ�ϲ���
void func(int a, int)
{
	cout << "this is func" << endl;
}

int main(int argc, char* argv[])
{
	func(10, 10);
	return 0;
}