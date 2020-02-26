#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque容器排序
void test01()
{
	deque<int> d1;

	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	cout << "排序前:" << endl;
	printDeque(d1);

	//排序 默认排序规则 从小到大 排序
	//对支持随机访问的迭代器,都可以利用sort算法直接进行排序
	//vector容器也可以利用 sort进行排序
	sort(d1.begin(), d1.end());
	cout << "排序后:" << endl;
	printDeque(d1);

}

int main(int argc, char* argv[])
{
	test01();


	return 0;
}