#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//ָ�������
	//����ָ����������е�Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9 ,10 };
	cout << "��һ��Ԫ��Ϊ:" << arr[0] << endl;
	int* p = arr;//arr����������׵�ַ
	cout << "����ָ����ʵ�һ��Ԫ��:" << *p << endl;
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		cout << *p << endl;
		p++;
	}
	return 0;
}
