#include <iostream>
using namespace std;


class Person
{
public:
	Person(int age)
	{
		//thisָ��ָ�� �����õĳ�Ա���� ��������
		this->age = age;
	}

	Person& PersonAddPerson(Person &p)
	{
		this->age += p.age;
		//this��һ��ָ��p2��ָ��,��*thisָ��ľ���p2���������
		return *this;
	}

	int age;
};
//1.������Ƴ�ͻ
void test01()
{
	Person p1(18);
	cout << "p1������Ϊ:  " << p1.age << endl;
}
//2.���ض�������*this
void test02()
{
	Person p1(10);

	Person p2(10);

	//��ʽ���˼��
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);

	cout << "p2������Ϊ:  " << p2.age << endl;
}


int main(int argc, char* argv[])
{
	//test01();
	test02();

	return 0;
}