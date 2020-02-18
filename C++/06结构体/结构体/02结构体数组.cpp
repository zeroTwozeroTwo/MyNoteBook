#include <iostream>
using namespace std;
#include <string>

//结构体数组
//1.定义结构体
struct Student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};

int main(int argc, char* argv[])
{
	//2.创建结构体数组
	struct Student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,55}

	};

	//遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名:  " << stuArray[i].name
			<< "年龄:  " << stuArray[i].age
			<< "分数:  " << stuArray[i].score
			<< endl;
	}

	return 0;
}
