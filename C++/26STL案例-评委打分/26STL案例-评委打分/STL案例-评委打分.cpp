#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <stdlib.h>
#include <time.h>


/*
 * 有5名选手,选手ABCDE,10个评委分别对每一名选手打分,去除最高分,去除最低分,取平均分
 */
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;//姓名
	int m_Score;//平均分
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//将创建的Person对象,放入容器中
		v.push_back(p);
	}

}


//打分
void setScore(vector<Person>& v)
{
	srand((unsigned int)time(NULL));
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数 放入deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60~100
			d.push_back(score);
		}

		//排序
		sort(d.begin(), d.end());

		//去除最高分和最低分
		d.pop_front();
		d.pop_back();

		//去平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//累加每个评委的分数
		}
		int avg = sum / d.size();
		it->m_Score = avg;
	}
}

void showScore(const vector<Person>& v)
{
	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名:" << it->m_Name << "\t分数:" << it->m_Score << endl;
	}
}

int main(int argc, char* argv[])
{
	//1.创建5名选手
	vector<Person> v;//存放选手的容器
	createPerson(v);

	//测试
	//for(vector<Person>::iterator it = v.begin();it!=v.end();it++)
	//{
	//	cout << "姓名:" << it->m_Name << "\t分数:" << it->m_Score << endl;
	//}

	//2.给5名选手打分
	setScore(v);
	//3.显示最后得分
	showScore(v);

	return 0;
}
