#include <iostream>
using namespace std;
#include <string>


//1.设计英雄结构体
struct Hero
{
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string sex;
};


void bubbleSort(struct Hero heroes[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroes[j].age > heroes[j + 1].age)
			{
				struct Hero tempHero = heroes[j + 1];
				heroes[j + 1] = heroes[j];
				heroes[j] = tempHero;
			}
		}
	}
}

void printHeros(struct Hero heroes[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名:  " << heroes[i].name << " 年龄:  " << heroes[i].age
			<< "  性别:  " << heroes[i].sex << endl;
	}
}

int main(int argc, char* argv[])
{

	//2.创建数组存放5名英雄
	struct Hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前打印:" << endl;
	printHeros(heroArray, len);
	//3.对数组进行排序,按照年龄进行升序排序
	bubbleSort(heroArray, len);
	//4. 将排序后的结果打印输出
	cout << "排序后打印:" << endl;
	printHeros(heroArray, len);
	return 0;
}
