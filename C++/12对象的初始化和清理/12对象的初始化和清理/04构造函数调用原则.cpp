#include <iostream>
using namespace std;

//���캯���ĵ��ù���
//1.����һ����,C++���������ÿ���඼�������3������
//Ĭ�Ϲ��� (��ʵ��)
//��������	(����ʾ)
//�������� (ֵ����)


//2.�������д���вι��캯��,�������Ͳ����ṩĬ�Ϲ���,����Ȼ�ṩ��������
//	�������д�˿������캯��,�������Ͳ����ṩ������ͨ���캯����
class Person
{
public:
	//Person()
	//{
	//	cout << "Person��Ĭ�Ϲ��캯������" << endl;
	//}

	//Person(int age)
	//{
	//	cout << "Person���вι��캯������" << endl;
	//	m_Age = age;
	//}

	Person(const Person & person)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = person.m_Age;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int m_Age;
};

//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "p2������Ϊ:  " << p2.m_Age << endl;
//}

void test02()
{
	Person p(28);

	Person p2(p);

	cout << "p2������Ϊ:  " << p2.m_Age << endl;

}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	return 0;
}