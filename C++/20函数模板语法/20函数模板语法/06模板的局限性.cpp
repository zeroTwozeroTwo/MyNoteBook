#include <iostream>
using namespace std;
#include <string>


//ģ�������
//ģ�岢�������ܵ�,��Щ�ض�����������,��Ҫ�þ��廯�ķ�ʽ���������ʵ��
class Person
{
public:
	Person(string name, int age) :m_Name(name), m_Age(age)
	{

	}


	//����
	string m_Name;
	//����
	int m_Age;
};

//�Ա���������ʱ�����
template<typename T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	return false;
}

//���þ��廯��Person�İ汾��ʵ�ִ���,���廯���ȵ���
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	return false;
}


void test01()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}


void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 11);

	bool ret = myCompare(p1, p2);

	if (ret)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}


int main(int argc, char* argv[])
{
	//test01();
	test02();

	return 0;
}