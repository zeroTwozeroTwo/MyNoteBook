#include <iostream>
#include <string>
using namespace std;

//�������Ϊ���Ա

//�ֻ���
class Phone
{
public:
	Phone(string name)
	{
		m_PName = name;
		cout << "Phone�Ĺ��캯������" << endl;
	}

	~Phone()
	{
		cout << "Phone��������������" << endl;
	}
	
	string m_PName;
};

//����
class Person
{
public:
	//Phone m_Phone = pName ��ʽת����
	Person(string name,string pName):m_Name(name),m_Phone(pName)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}
	
	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
};

//�������������Ϊ�����Ա,����ʱ���ȹ��������,�ڹ�������,������˳���빹���෴
void test01()
{
	Person p("����", "ƻ��MAX");

	cout << p.m_Name << "����:  " << p.m_Phone.m_PName << endl;
}

int main(int argc, char* argv[])
{
	test01();
	return 0;
}