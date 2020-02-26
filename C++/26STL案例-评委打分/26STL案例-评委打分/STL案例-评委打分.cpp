#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <stdlib.h>
#include <time.h>


/*
 * ��5��ѡ��,ѡ��ABCDE,10����ί�ֱ��ÿһ��ѡ�ִ��,ȥ����߷�,ȥ����ͷ�,ȡƽ����
 */
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;//����
	int m_Score;//ƽ����
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//��������Person����,����������
		v.push_back(p);
	}

}


//���
void setScore(vector<Person>& v)
{
	srand((unsigned int)time(NULL));
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ��� ����deque������
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60~100
			d.push_back(score);
		}

		//����
		sort(d.begin(), d.end());

		//ȥ����߷ֺ���ͷ�
		d.pop_front();
		d.pop_back();

		//ȥƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//�ۼ�ÿ����ί�ķ���
		}
		int avg = sum / d.size();
		it->m_Score = avg;
	}
}

void showScore(const vector<Person>& v)
{
	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "����:" << it->m_Name << "\t����:" << it->m_Score << endl;
	}
}

int main(int argc, char* argv[])
{
	//1.����5��ѡ��
	vector<Person> v;//���ѡ�ֵ�����
	createPerson(v);

	//����
	//for(vector<Person>::iterator it = v.begin();it!=v.end();it++)
	//{
	//	cout << "����:" << it->m_Name << "\t����:" << it->m_Score << endl;
	//}

	//2.��5��ѡ�ִ��
	setScore(v);
	//3.��ʾ���÷�
	showScore(v);

	return 0;
}
