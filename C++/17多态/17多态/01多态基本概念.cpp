#include <iostream>
using namespace std;

//多态

//动物类
class Animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class Cat :public Animal
{
public:
	//重写 函数返回值类型 函数名 参数列表 完全相同
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

//狗类
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//执行说话的函数
//地址早绑定 在编译阶段确定函数地址
//如果想执行让猫说话,那么这个函数的地址就不能提前绑定,需要在运行阶段进行绑定,也就是地址晚绑定

//动态多态满足条件
//1.有继承关系
//2.子类重写父类的虚函数

//动态多态的使用
//父类的指针或者引用	指向子类对象

void doSpeak(Animal& animal)// Animal & animal = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}


int main(int argc, char* argv[])
{
	//test01();
	test02();



	return 0;
}