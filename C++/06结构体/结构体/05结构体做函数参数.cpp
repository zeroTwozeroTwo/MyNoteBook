#include <iostream>
using namespace std;
#include <string>

struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};

//��ӡѧ����Ϣ�ĺ���
//1.ֵ����
void printStudent1(struct Student s)
{
	cout << "�Ӻ����� ����:" << s.name << "����:" << s.age << "����: " << s.score << endl;
}

//2.��ַ����
void printStudent2(struct Student* s)
{
	cout << "�Ӻ���2�� ����:" << s->name << "����:" << s->age << "����:" << s->score << endl;
}


int main(int argc, char* argv[])
{
	//�ṹ������������
	//��ѧ�����뵽һ��������,��ӡѧ�����ϵ�������Ϣ
	struct Student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	printStudent2(&s);
	return 0;
}
