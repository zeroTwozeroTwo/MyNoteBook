#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//1. 单精度 float
	//2. 双精度 double
	//默认情况下,输出一个小数,会显示6位有效数字
	float f1 = 3.1415926f;

	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1=" << d1 << endl;

	//统计float和double的内存空间
	cout << "float 占用内存空间为:" << sizeof(float) << endl;
	cout << "double 占用内存空间为:" << sizeof(double) << endl;
	return 0;
}
