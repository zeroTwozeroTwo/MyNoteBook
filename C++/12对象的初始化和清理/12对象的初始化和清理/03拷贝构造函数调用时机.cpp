#include <iostream>
using namespace std;

//�������캯������ʱ��


class Person
{
public:

	Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}

	Person(int age)
	{
		cout << "Person�вι��캯������" << endl;
		m_Age = age;
	}

	Person(const Person& person)
	{
		m_Age = person.m_Age;
		cout << "Person�������캯������" << endl;

	}

	~Person()
	{
		cout << "Person������������" << endl;
	}

	int m_Age;
};

//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2������Ϊ:" << p2.m_Age << endl;
}
//2.ֵ���ݵķ�ʽ������������ֵ
void doWork(Person person)
{

}

void test02()
{
	Person p;
	doWork(p);
}
//3.ֵ��ʽ���ؾֲ�����
Person doWork2()
{
	Person person;
	cout << (int*)&person << endl;
	return person;
}

void test03()
{
	Person person = doWork2();
	cout << (int*)&person << endl;
}
int main(int argc, char* argv[])
{
	//test01();
	//test02();
	test03();
	return 0;
}