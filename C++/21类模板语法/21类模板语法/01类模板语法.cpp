#include <iostream>
using namespace std;
#include <string>

//��ģ��
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name = " << this->m_Name << "\tage = " << this->m_Age << endl;
	}
	
	NameType m_Name;
	AgeType m_Age;
};

void test01()
{
	Person<string, int> p1("�����", 999);

	p1.showPerson();
}


int main(int argc, char* argv[])
{
	test01();

	return 0;
}