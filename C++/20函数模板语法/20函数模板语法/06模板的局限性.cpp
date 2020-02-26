#include <iostream>
using namespace std;
#include <string>


//模板局限性
//模板并不是万能的,有些特定的数据类型,需要用具体化的方式来做特殊的实现
class Person
{
public:
	Person(string name, int age) :m_Name(name), m_Age(age)
	{

	}


	//姓名
	string m_Name;
	//年龄
	int m_Age;
};

//对比两个数据时候相等
template<typename T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	return false;
}

//利用具体化的Person的版本来实现代码,具体化优先调用
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	return false;
}


void test01()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}


void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 11);

	bool ret = myCompare(p1, p2);

	if (ret)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}


int main(int argc, char* argv[])
{
	//test01();
	test02();

	return 0;
}