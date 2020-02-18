#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//三目运算符
	//创建三个变量a b c
	//将a和b做比较,将变量大的值赋值给变量
	int a = 10;
	int b = 20;
	int c = 0;
	c = a > b ? a : b;
	cout << "c=" << c << endl;
	
	return 0;
}
