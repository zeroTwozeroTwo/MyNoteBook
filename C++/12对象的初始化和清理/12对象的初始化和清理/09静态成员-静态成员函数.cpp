#include <iostream>
using namespace std;


//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	static int age;
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է���	��̬��Ա����
		//m_B = 200;//��̬��Ա���� �����Է��� �Ǿ�̬��Ա����,�޷����ֵ������ĸ������m_B����
		cout << "static void func����" << endl;
	}

	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:

	static void func2()
	{
		cout << "static void func2����" << endl;
	}
};
int Person::m_A = 0;

void test01()
{
	//1.ͨ���������
	Person person;
	person.func();
	//2.ͨ����������
	Person::age;
	Person::func();
	//Person::func2(); ������ʲ���˽�еľ�̬��Ա����
}

int main(int argc, char* argv[])
{
	test01();

	return 0;
}