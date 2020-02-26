#include <iostream>
using namespace std;

//类模板与继承
template<class T>
class Base
{
public:
	T m;
};

//class Son:public Base//错误,必须要知道父类中的T类型,才能继承给子类
class Son :public Base<int>
{
public:

};

//如果想灵活指定父类中T类型,那么子类也需要变为一个模板
template<class T1, class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为:" << typeid(T1).name() << endl;
		cout << "T2的类型为:" << typeid(T2).name() << endl;
	}
	T1 obj;
};


void test02()
{
	Son2<int, char> s2;
}

void test01()
{
	Son s1;
}


int main(int argc, char* argv[])
{
	//test01();
	test02();


	return 0;
}