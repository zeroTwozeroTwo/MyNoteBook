#include <iostream>
using namespace std;
#include <string>


struct Student
{
	string name;//姓名
	int age;//年龄
	int score;//考试分数
};

//定义老师结构体
struct teacher
{
	int id;//教师编号
	string name;//教师姓名
	int age;//年龄
	struct Student stu;
};


int main(int argc, char* argv[])
{
	struct teacher t;
	t.id = 1000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 18;
	t.stu.score = 60;

	cout << "老师的姓名:  " << t.name << "老师编号:  " << t.id << "老师的年龄:  " << t.age
		<< "老师辅导的学生姓名: " << t.stu.name << "学生年龄: " << t.stu.age << "学生考试分数为: "
		<< t.stu.score << endl;
	return 0;
}
