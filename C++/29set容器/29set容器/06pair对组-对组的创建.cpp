#include <iostream>
using namespace std;
#include <set>

//pair对组的创建
void test01()
{
	//第一种方式
	pair<string, int> p("Tom", 20);

	cout << "姓名:" << p.first << "\t年龄:" << p.second << endl;

	//第二种方式
	pair<string, int> p2 = make_pair("Jerry", 30);
	
	cout << "姓名:" << p2.first << "\t年龄:" << p2.second << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}