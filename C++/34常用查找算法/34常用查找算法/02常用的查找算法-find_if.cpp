#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>

//常用的查找算法-find_if

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

//1.查找内置数据类型
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());

	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到元素: " << *it << endl;
	}
}




//2.查找自定义数据类型
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

class Greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_Age > 20;
	}
};

void test02()
{
	vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//找年龄大于20的人
	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());

	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到姓名: " << it->m_Name << "\t年龄:" << it->m_Age << endl;
	}


}


int main(int argc, char* argv[])
{
	//test01();

	test02();


	return 0;
}
