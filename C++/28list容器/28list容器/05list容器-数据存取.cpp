#include <iostream>
using namespace std;
#include <list>


//list容器 数据存取
void test01()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//l1[0] 不可以使用[]访问list容器中的元素

	//l1.at(0) 不可以使用at方式访问list容器中的元素

	//原因是list本质是链表,不是连续线性空间存储数据,迭代器也是不支持随机访问的
	

	cout << "list容器第一个元素:" << l1.front() << endl;
	cout << "list容器最后一个元素:" << l1.back() << endl;


	//验证迭代器是不支持随机访问的
	list<int>::iterator it = l1.begin();

	//it = it + 1;不支持随机访问
	it++;//支持双向
}

int main(int argc, char* argv[])
{
	test01();



	return 0;
}