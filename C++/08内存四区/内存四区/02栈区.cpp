#include <iostream>
using namespace std;

//栈区数据的注意事项 --- 不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放
int* function(int b)//形参数据也会放在栈区
{
	b = 100;
	int a = 10;//局部变量 存放在栈区,栈区的数据在函数执行完成后自动释放
	return &a;//返回局部变量地址
}

int main(int argc, char* argv[])
{
	int* p = function();//接受function函数返回的地址
	cout << *p << endl;//第一次可以打印正确的数字,是因为编译器做了保留
	cout << *p << endl;//第二次这个数据就不在保留了
	return 0;
}
