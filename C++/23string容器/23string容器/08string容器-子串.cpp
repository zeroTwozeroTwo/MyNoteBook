#include <iostream>
using namespace std;
#include <string>

//string求子串

void test01()
{
	string str = "abcdef";

	//从几开始截几个
	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

//实用操作
void test02()
{
	string email = "zhangsan@sina.com";

	//从邮件地址中 获取 用户名信息
	string user = email.substr(0, email.find("@"));

	cout << "user = " << user << endl;

}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	return 0;
}