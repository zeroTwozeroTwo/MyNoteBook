#include <iostream>
using namespace std;


//�̳��е�ͬ����̬��Ա����
class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()����" << endl;
	}

	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}

};

int Base::m_A = 100;

class Son :public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()����" << endl;
	}
};

int Son::m_A = 200;


//ͬ����̬��Ա����
void test01()
{

	//1.ͨ���������
	cout << "ͨ���������:  " << endl;
	Son son;
	cout << "Son �� m_A = " << son.m_A << endl;
	cout << "Base �� m_A = " << son.Base::m_A << endl;

	//2.ͨ����������
	cout << "ͨ����������:  " << endl;
	cout << "Son �� m_A = " << Son::m_A << endl;
	//��һ::����ͨ�������ķ�ʽ������	�ڶ���::������ʸ�����������
	cout << "Base �� m_A = " << Son::Base::m_A << endl;
}

//ͬ����̬��Ա����
void test02()
{
	//1.ͨ���������
	cout << "ͨ���������" << endl;
	Son s;
	s.func();
	s.Base::func();

	//2.ͨ��������ʽ����
	cout << "ͨ����������" << endl;
	Son::func();
	Son::Base::func();

	//������ֺ͸���ͬ���ľ�̬��Ա����,Ҳ�����ظ��������е�ͬ����Ա����
	//�������ʸ����б����ص�ͬ����Ա,��Ҫ��������
	Son::Base::func(100);
}


int main(int argc, char* argv[])
{
	//test01();
	test02();


	return 0;
}