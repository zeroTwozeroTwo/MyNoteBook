#include <iostream>
using namespace std;

//1.创建学生数据类型:学生包括(姓名,年龄,分数)
//自定义数据类型,一些类型集合组成的一个类型
//语法 struct 类型的名称{成员列表}
struct Student
{
	//成员列表
	string name;
	int age;
	int score;
};

//2.1 struct Student s1;
//2.2 struct Student s2 = {......};
//2.3 在定义结构体时顺便创建结构体变量

int main(int argc, char* argv[])
{
	//struct 关键字可以省略
	struct Student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 20;

	cout << "姓名:" << s1.name << "  "<< "年龄:" << s1.age << "分数:" << s1.score << endl;
	
	return 0;
}
