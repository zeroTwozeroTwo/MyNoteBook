#include <iostream>
using namespace std;


// 常量的定义方式
// #define 宏常量
// const修饰变量
#define DAY 7

int main(int argc, char* argv[])
{
	//1. DAY是常量,一旦修改就会报错
	cout << "一周总共有:" << DAY << "天" << endl;
	//2. const修饰的变量也称为常量
	const int month = 12;
	cout << "一年总共有:" << month << "个月份" << endl;
	return 0;
}

