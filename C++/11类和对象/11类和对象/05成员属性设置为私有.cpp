#include <iostream>
#include <string>
using namespace std;

//成员属性设置为私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性


//设计人类
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}

	//获取年龄 可读可写 如果想修改(年龄的范围必须是 0 - 150之间)
	int getAge()
	{
		//m_Age = 0;//初始化为0岁
		return m_Age;
	}

	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "年龄范围不合法!" << endl;
			return;
		}
		m_Age = age;
	}

	//设置情人只写
	void setLover(string lover)
	{
		m_Lover = lover;
	}
	
private:
	//姓名 可读可写
	string m_Name;
	//年龄 只读
	int m_Age;
	//情人 只写
	string m_Lover;
};
int main(int argc,char * argv[])
{
	Person person;
	//person.m_Name = "张三";
	person.setName("张三");

	cout << "姓名为:" << person.getName() << endl;

	//person.m_Age = 18;
	//person.setAge(18);
	person.setAge(1000);
	cout << "年龄为:" << person.getAge() << endl;

	person.setLover("苍井");

	//cout << "情人为:" << person.getLover() << endl; //是不可以访问的
	return 0;
}