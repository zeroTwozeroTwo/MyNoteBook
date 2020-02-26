#include <iostream>
using namespace std;
#include <map>

//map容器-构造和赋值
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "\tvalue = " << it->second << endl;
	}
}


void test01()
{
	map<int, int> m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	printMap(m);


	//拷贝构造
	map<int, int> m2(m);
	printMap(m2);

	//赋值
	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}


int main(int argc, char* argv[])
{

	test01();

	

	return 0;
}