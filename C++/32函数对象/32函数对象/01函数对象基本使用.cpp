#include <iostream>
using namespace std;
#include <string>

//��������(�º���)
/*
 *  - ����������ʹ��ʱ,��������ͨ������������,�����в���,�����з���ֵ
 *  - �������󳬳���ͨ�����ĸ���,��������������Լ���״̬
 *  - �������������Ϊ��������
 */

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

// 1. - ����������ʹ��ʱ,��������ͨ������������,�����в���,�����з���ֵ
void test01()
{

	MyAdd myAdd;
	cout << myAdd(100, 100) << endl;

}

class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}

	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count;//�ڲ��Լ���״̬
};
// 2. - �������󳬳���ͨ�����ĸ���,��������������Լ���״̬
void test02()
{
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");

	cout << "myPrint���ô���Ϊ:" << myPrint.count << endl;


}

void doPrint(MyPrint& m, string test)
{
	m(test);
}

// 3. - �������������Ϊ��������
void test03()
{
	MyPrint myPrint;

	doPrint(myPrint, "Hello C++");
}

int main(int argc, char* argv[])
{
	//test01();

	//test02();

	test03();



	return 0;
}