#include <iostream>
using namespace std;

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char* argv[])
{
	//指针和函数,
	//1.值传递
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//2. 地址传递
	//地址传递可以修改实参
	swap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
