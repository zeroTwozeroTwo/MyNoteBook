#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

//vector��������Զ�����������
class Person
{
public:

	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	
	string m_Name;
	int m_Age;
};

void test01()
{
	vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 12);
	Person p3("ccc", 15);
	Person p4("ddd", 16);
	Person p5("eee", 17);
	Person p6("fff", 18);

	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);


	//���������е�����
	for(vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "����:" << it->m_Name << "\t����:" << it->m_Age << endl;
	}
}

//����Զ����������͵�ָ��
void test02()
{
	vector<Person*> v;

	Person p1("aaa", 10);
	Person p2("bbb", 12);
	Person p3("ccc", 15);
	Person p4("ddd", 16);
	Person p5("eee", 17);
	Person p6("fff", 18);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	v.push_back(&p6);


	//��������
	for(vector<Person*>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "---����:" << (*it)->m_Name << "\t����:" << (*it)->m_Age << endl;
	}
	
}

int main(int argc, char* argv[])
{

	//test01();
	test02();

	

	return 0;
}