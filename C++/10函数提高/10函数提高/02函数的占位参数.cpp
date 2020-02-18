#include <iostream>
using namespace std;

//占位参数
//返回值类型 函数名(数据类型)

//目前阶段的占位参数,我们还用不到,后面的课程中会用到
//占位参数还可以有默认参数
void func(int a, int)
{
	cout << "this is func" << endl;
}

int main(int argc, char* argv[])
{
	func(10, 10);
	return 0;
}