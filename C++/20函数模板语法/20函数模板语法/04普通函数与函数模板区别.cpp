#include <iostream>
using namespace std;


//��ͨ�����뺯��ģ������

//1.��ͨ�������ÿ��Է�����ʽ����ת��
//2.����ģ�� ���Զ������Ƶ�,�����Է�����ʽ����ת��
//3.����ģ��	����ʾָ������,���Է�����ʽ����ת��

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

//����ģ��
template<typename T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	//cout << myAdd01(a, c) << endl;

	//�Զ������Ƶ�	���ᷢ����ʽ����ת��
	//cout << myAdd02(a, c) << endl;

	//��ʾָ������	�ᷢ����ʽ����ת��
	cout << myAdd02<int>(a, c) << endl;
}

int main(int argc, char* argv[])
{
	test01();


	return 0;
}