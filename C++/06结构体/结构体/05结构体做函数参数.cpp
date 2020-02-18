#include <iostream>
using namespace std;
#include <string>

struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};

//打印学生信息的函数
//1.值传递
void printStudent1(struct Student s)
{
	cout << "子函数中 姓名:" << s.name << "年龄:" << s.age << "分数: " << s.score << endl;
}

//2.地址传递
void printStudent2(struct Student* s)
{
	cout << "子函数2中 姓名:" << s->name << "年龄:" << s->age << "分数:" << s->score << endl;
}


int main(int argc, char* argv[])
{
	//结构体做函数参数
	//将学生传入到一个参数中,打印学生身上的所有信息
	struct Student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	printStudent2(&s);
	return 0;
}
