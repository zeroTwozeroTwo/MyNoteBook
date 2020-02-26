#include <iostream>
using namespace std;
#include <list>
#include <string>

//list���� ������ �����Զ����������� ������

//���������������,���������ͬ������߽��н���

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	string m_Name;//����
	int m_Age;//����
	int m_Height;//���

};

//ָ���������
bool comparePerson(Person &p1,Person &p2)
{
	//�������� ����
	if(p1.m_Age == p2.m_Age)
	{
		//������ͬ ������߽���
		return p1.m_Height > p2.m_Height;
	}
	return p1.m_Age < p2.m_Age;
}

void test01()
{

	list<Person> l;//��������

	//׼������
	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);

	//��������
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "����:" << it->m_Name << "\t����:" << it->m_Age << "\t���:" << it->m_Height << endl;
	}

	//����
	cout << "--------------------------------------" << endl;
	cout << "�����:" << endl;
	l.sort(comparePerson);
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "����:" << it->m_Name << "\t����:" << it->m_Age << "\t���:" << it->m_Height << endl;
	}
	
}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}