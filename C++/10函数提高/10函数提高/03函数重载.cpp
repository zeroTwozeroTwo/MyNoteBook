#include <iostream>
using namespace std;


//��������
//�����ú�������ͬ,��߸�����


//�������ص���������
//1.ͬһ����������
//2.����������ͬ
//3.�����������Ͳ�ͬ,���߸�����ͬ,����˳��ͬ
void func()
{
	cout << "func�ĵ���" << endl;
}

void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}

void func(double a)
{
	cout << "func(double a)�ĵ���" << endl;
}

void func(int a,double b)
{
	cout << "func (int a,double b) �ĵ���" << endl;
}

void func(double a, int b)
{
	cout << "func (double a,int b) �ĵ���" << endl;
}

//ע������
//�����ķ���ֵ��������Ϊ�������ص�����
//int func(double a, int b)
//{
//	cout << "func (double a,int b) �ĵ���" << endl;
//}

int main(int argc, char* argv[])
{
	//func(3.14);
	func(3.14, 10);
	return 0;
}