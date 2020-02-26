#include <iostream>
using namespace std;
#include <set>

//set容器排序
void printSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		//降序 前面的数大于后面的数
		return v1 > v2;
	}
};


void test01()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);

	printSet(s1);


	//指定排序规则为从大到小

	set<int, MyCompare> s2;

	s2.insert(10);
	s2.insert(50);
	s2.insert(30);
	s2.insert(40);
	s2.insert(20);

	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


int main(int argc, char* argv[])
{
	test01();





	return 0;
}