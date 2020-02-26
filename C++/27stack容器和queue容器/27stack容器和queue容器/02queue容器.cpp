#include <iostream>
using namespace std;
#include <algorithm>
#include <queue>
#include <string>

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

//���� Queue
void test01()
{
	//��������
	queue<Person> q;
	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 900);
	Person p4("ɳɮ", 800);


	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "���д�СΪ:" << q.size() << endl;

	//�ж�ֻҪ���в�Ϊ��,�鿴��ͷ,�鿴��β,����
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷԪ��------����:" << q.front().m_Name << "\t����:" << q.front().m_Age << endl;
		//�鿴��β
		cout << "��βԪ��------����:" << q.front().m_Name << "\t����:" << q.front().m_Age << endl;
		//����
		q.pop();
	}
	cout << "���д�СΪ:" << q.size() << endl;
}

int main(int argc, char* argv[])
{
	test01();

	return 0;
}