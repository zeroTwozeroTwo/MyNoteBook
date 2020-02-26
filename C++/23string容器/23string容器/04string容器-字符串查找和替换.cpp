#include <iostream>
using namespace std;

//字符串查找和替换


//1.查找

void test01()
{
	string str1 = "abcdefgde";

	int pos = str1.find("de");

	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到了字符串" << endl;
	}

	cout << "pos = " << pos << endl;

	//rfind 和find的区别
	//rfind是找字符串最后出现位置,find是第一次出现位置
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

//2.替换
void test02()
{
	string str1 = "abcdefg";

	//从 1号位置起 3个字符 替换为"1111"
	str1.replace(1, 3, "1111");

	cout << str1 << endl;

}

int main(int argc, char* argv[])
{
	//test01();
	test02();


	return 0;
}