#include <iostream>
#include <string> //用c++风格字符串的时候,要包含这个头文件
using namespace std;

int main(int argc, char* argv[])
{
	// 1. C风格字符串
	// 注意事项 char 字符串名[]
	char str[] = "hello world";
	cout << str << endl;
	// 2. C++风格字符串
	// 注意事项,使用时要包含头文件
	string str2 = "hello world";
	cout << str2 << endl;
	return 0;
}
