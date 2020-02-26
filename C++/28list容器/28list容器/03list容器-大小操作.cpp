#include <iostream>
using namespace std;
#include <list>

//list容器大小操作

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
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList(l1);

	//判断容器是否为空
	if (l1.empty())
	{
		cout << "l1为空" << endl;
	}
	else
	{
		cout << "l1不为空" << endl;
		cout << "l1的元素个数为:" << l1.size() << endl;
	}

	//重新指定大小
	l1.resize(10,10000);
	printList(l1);

	l1.resize(2);
	printList(l1);
	
}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}