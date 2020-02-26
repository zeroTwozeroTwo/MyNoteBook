#include <iostream>
using namespace std;
#include <set>

//set容器构造和赋值
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
	set<int> s;

	//插入数据 只有insert方式
	s.insert(50);
	s.insert(20);
	s.insert(60);
	s.insert(80);
	s.insert(10);
	s.insert(10);

	//遍历容器
	//set容器特点:所有元素插入时候自动被排序
	//set容器不需要插入重复值
	printSet(s);
	//拷贝构造
	set<int> s2(s);
	printSet(s2);


	//赋值
	set<int> s3;
	s3 = s2;
	printSet(s3);
}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}