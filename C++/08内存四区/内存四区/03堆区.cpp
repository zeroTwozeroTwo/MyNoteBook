#include <iostream>
using namespace std;


int* function()
{
	//����new�ؼ���  ���Խ����ݿ��ٵ�����
	int* p = new int(10);
	return p;
}

int main(int argc, char* argv[])
{
	//�ڶ�����������
	int* p = function();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl; 
	return 0;
}
