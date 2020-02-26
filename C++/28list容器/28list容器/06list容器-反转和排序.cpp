#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

//list容器 反转和排序
void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	//反转
	list<int> l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(30);
	l1.push_back(50);
	l1.push_back(70);
	l1.push_back(80);
	l1.push_back(230);

	cout << "反转前:" << endl;
	printList(l1);

	cout << "反转后:" << endl;

	l1.reverse();

	printList(l1);


}

bool myConpare(int v1, int v2)
{
	//降序 就让第一个数 > 第二个数
	return v1 > v2;
}

//排序
void test02()
{
	list<int> l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(30);
	l1.push_back(50);
	l1.push_back(70);
	l1.push_back(80);
	l1.push_back(230);

	//排序
	cout << "排序前:" << endl;
	printList(l1);

	//所有不支持随机访问迭代器的容器,不可以用标准算法
	//不支持随机访问迭代器的容器,内部会提供一些对应的算法
	//sort(l1.begin(),l1.end());
	l1.sort();

	cout << "排序后:" << endl;
	printList(l1);

	l1.sort(myConpare);
	printList(l1);
}

int main(int argc, char* argv[])
{

	//test01();
	test02();

	return 0;
}