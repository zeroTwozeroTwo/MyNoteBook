#include <iostream>
using namespace std;


//�����ǳ����
class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age, int height)
	{
		m_Height = new int(height);
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
	}

	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
	Person(const Person & person)
	{
		cout << "Person�������캯������" << endl;
		m_Age = person.m_Age;
		//m_Height = person.m_Height; ������Ĭ��ʵ�־������д���
		//���

		m_Height = new int(*person.m_Height);
	}

	~Person()
	{
		//��������,�����������������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person��������������" << endl;
	}

	int m_Age;//����
	int* m_Height;//���
};


void test01()
{
	Person p1(18, 160);

	cout << "p1������Ϊ: " << p1.m_Age << "���Ϊ: " << *p1.m_Height << endl;

	Person p2(p1);

	cout << "p2������Ϊ: " << p2.m_Age << "���Ϊ: " << *p2.m_Height << endl;

	
}

int main(int argc, char* argv[])
{

	test01();
	return 0;
}