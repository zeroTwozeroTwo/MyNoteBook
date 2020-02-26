#include <iostream>
using namespace std;
#include <map>


//map容器 - 大小和交换

//大小
void test01()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	if(m.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "容器大小为:" << m.size() << endl;
	}

	
}


void printMap(const map<int, int>& m)
{
	for(map<int,int>::const_iterator it = m.begin();it!=m.end();it++)
	{
		cout << "值 = " << it->first << "\t键 = " << it->second << endl;
	}
	cout << endl;
}
//交换
void test02()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));


	map<int, int> m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));
	m2.insert(pair<int, int>(7, 400));


	cout << "交换前:" << endl;
	printMap(m);
	printMap(m2);

	cout << "交换后:" << endl;
	m.swap(m2);
	printMap(m);
	printMap(m2);

	
}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	


	return 0;
}