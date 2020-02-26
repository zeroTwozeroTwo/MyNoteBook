#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
//���õĲ����㷨 count_if

//1.ͳ��������������
class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

void test01()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(50);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(70);
	v.push_back(80);
	v.push_back(90);
	v.push_back(30);

	int num = count_if(v.begin(), v.end(), Greater20());

	cout << "����20��Ԫ�ظ���Ϊ: " << num << endl;

}

//2.ͳ���Զ�����������
class Person
{
public:

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class AgeGreater20
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age > 20;
	}
};

void test02()
{
	vector<Person> v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 40);
	Person p5("�ܲ�", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//ͳ�ƴ���20��Ա����
	int num = count_if(v.begin(), v.end(), AgeGreater20());
	cout << "����20�����Ա����Ϊ: " << num << endl;
}

int main(int argc, char* argv[])
{
	//test01();
	test02();


	return 0;
}