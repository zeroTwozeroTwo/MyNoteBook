#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//���ò����㷨
//find


//���� ������������
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//���� �������Ƿ���5���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 50);
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�: " << *it << endl;
	}

}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	//���� == �ײ�find֪����ζԱ�Person��������
	bool operator==(const Person& p) const
	{
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		return false;
	}

	string m_Name;
	int m_Age;
};

//���� �Զ�����������
void test02()
{
	vector<Person> v;
	//��������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find(v.begin(), v.end(), p2);

	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�Ԫ�� ����:" << it->m_Name << "\t����:" << it->m_Age << endl;
	}


}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	return 0;
}