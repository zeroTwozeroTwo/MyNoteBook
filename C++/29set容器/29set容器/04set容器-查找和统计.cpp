#include <iostream>
using namespace std;
#include <set>

//set容器 查找和统计
void printSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	//查找
	set<int> s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	s1.insert(50);

	set<int>::iterator pos = s1.find(200);

	if (pos != s1.end())
	{
		cout << "找到元素:" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

}

//统计
void test02()
{

	//查找
	set<int> s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	s1.insert(50);


	int num = s1.count(30);
	//对于set而言 统计结果 要么是0 要么是1
	cout << "num = " << num << endl;
	
}


int main(int argc, char* argv[])
{
	//test01();
	test02();



	return 0;
}