#include <iostream>
using namespace std;


//�������������
class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
	//���ó�Ա��������		��������� .operator<<(cout) �򻯰汾 p << cout
	//�������ó�Ա��������<<�����,��Ϊ�޷�ʵ�� cout �����
	/*void operator<<()
	{

	}*/
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream& cout, Person& p)//���� operator<<(cout,p) �� cout << p
{
	cout << "m_A = " << p.m_A << endl
		<< "m_B = " << p.m_B << endl;

	return cout;
}

void test01()
{
	Person p(10,10);

	//cout << p.m_A << endl;

	cout << p << "hello world" << endl;
}

int main(int argc, char* argv[])
{
	test01();


	return 0;
}