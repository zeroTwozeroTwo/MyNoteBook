#include <iostream>
using namespace std;


int* function()
{
	//利用new关键字  可以将数据开辟到堆区
	int* p = new int(10);
	return p;
}

int main(int argc, char* argv[])
{
	//在堆区开辟数据
	int* p = function();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl; 
	return 0;
}
