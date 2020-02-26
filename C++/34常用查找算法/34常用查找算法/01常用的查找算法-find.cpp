#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//常用查找算法
//find


//查找 内置数据类型
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找 容器中是否有5这个元素
	vector<int>::iterator it = find(v.begin(), v.end(), 50);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到: " << *it << endl;
	}

}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	//重载 == 底层find知道如何对比Person数据类型
	bool operator==(const Person& p) const
	{
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		return false;
	}

	string m_Name;
	int m_Age;
};

//查找 自定义数据类型
void test02()
{
	vector<Person> v;
	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find(v.begin(), v.end(), p2);

	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到元素 姓名:" << it->m_Name << "\t年龄:" << it->m_Age << endl;
	}


}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	return 0;
}