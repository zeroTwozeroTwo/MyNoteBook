#include <iostream>
using namespace std;


//�̳��еĹ����������˳��
class Base
{
public:
	Base()
	{
		cout << "Base���캯��!" << endl;
	}

	~Base()
	{
		cout << "Base��������!" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son���캯��!" << endl;
	}

	~Son()
	{
		cout << "Son��������!" << endl;
	}
};

void test01()
{
	//Base base;

	//�̳��еĹ��������˳������:
	//�ȹ��츸��,�ٹ�������,������˳���빹���˳���෴
	Son s;

}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}