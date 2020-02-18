#include <iostream>
using namespace std;

//new的基本语法
int* func()
{
	//在堆区创建整形数据
	//new 返回的是 改数据类型的指针
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	//堆区的数据 由程序员管理开辟,程序员管理释放
	//如果想释放堆区数据,利用关键字delete
	delete p;//内存已经被释放,再次访问就是非法操作,会报错

	//cout << *p << endl;

}

//2. 在堆区利用new开辟数组
void test02()
{
	//创建10个整形数据的数组,在堆区
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//释放堆区数组
	//释放数组的时候 要加[]才可以
	delete[] arr;
	
}

int main(int argc, char* argv[])
{
	//1.new的基本语法
	test01();
	//2.在堆区利用new开辟数组
	test02();
	return 0;
}
