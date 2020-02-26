#include <iostream>
using namespace std;
#include <functional>


//内建函数对象 算术仿函数

//negate 一元仿函数 取反仿函数
void test01()
{
	negate<int> n;
	cout << n(true) << endl;
}

//plus 二元仿函数 加法
void test02()
{
	plus<int> p;
	cout << p(10, 20) << endl;

	
}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	return 0;
}