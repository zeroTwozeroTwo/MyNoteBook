#include <iostream>
using namespace std;

//交换函数


//1.值传递
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}

//2.地址传递
void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用传递
void swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int main(int argc, char* argv[])
{
	int a = 10;
	int b = 20;
	//swap01(a, b);//值传递,形参不会修饰实参

	//swap02(&a, &b);//地址传递,形参会修饰实参

	swap03(a, b);//引用传递,形参会修饰实参

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
