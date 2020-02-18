#include <iostream>
#include <string>
using namespace std;

//设计一个学生类,属性有姓名和学号
//可以给姓名和学号赋值,可以显示学生的姓名和学号

//学生类
class Student
{
public:

	//类中的属性和行为,我们统一称为 成员
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法
	
	int no;//学号
	string name;//姓名
	//行为
	void showNo()//显示学号
	{
		cout << "学生的学号为:" << no << endl;
	}

	void showName()//显示姓名
	{
		cout << "学生的姓名为:" << name << endl;
	}

	//给姓名赋值
	void setName(string sname)
	{
		name = sname;
	}

	//给学号赋值
	void setId(int id)
	{
		no = id;
	}
};

int main(int argc, char* argv[])
{
	//创建一个具体的学生,实例化对象
	Student student;
	student.setId(1);
	student.setName("小明");

	student.showNo();
	student.showName();
	return 0;
}