#include <iostream>
using namespace std;

//��ָ����ó�Ա����
class Person
{
public:

	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//����ԭ������Ϊ�����ָ����ΪNULL
		if(this == NULL)
		{
			return;
		}
		cout << "age = " << m_Age << endl;
	}
	
	int m_Age;
};


void test01()
{
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main(int argc, char* argv[])
{
	test01();

	
	
	return 0;
}