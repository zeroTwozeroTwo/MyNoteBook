#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{

	//1.const修饰指针
	int a = 10;
	int b = 10;

	//指针指向的值不可以改,指针的值可以改
	const int* p = &a;
	//*p = 10;
	//p = &b;

	//2.const修饰常量 指针常量
	//指针的指向不可以改,指针指向的值可以改
	int* const p1 = &a;

	//p1 = &b;
	//*p1 = 100;

	//3.const修饰指针和常量
	//指针的指向和指针的值,都不可以改
	const int* const p2 = &a;
	
	
	return 0;
}
