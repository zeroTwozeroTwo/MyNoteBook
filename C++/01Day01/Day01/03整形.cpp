#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//整数
	//1.短整数
	short num1 = 10;
	//2.整形
	int num2 = 10;
	//3.长整型
	long num3 = 10;
	//4.长长整形
	long long num4 = 10;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	//sizeof求数据类型大小
	cout << "short 内存大小为:" << sizeof(short) << endl;
	cout << "int 内存大小为:" << sizeof(int) << endl;
	cout << "long 内存大小为:" << sizeof(long) << endl;
	cout << "long long 内存大小为:" << sizeof(long long) << endl;
	return 0;
}
