#include <iostream>
using namespace std;
#include <string>

//�ṹ��ָ��

//����ṹ��
struct Student
{
	string name;
	int age;
	int score;
};

int main(int argc, char* argv[])
{
	//����ѧ���Ľṹ�����
	struct Student s = { "����",18,100 };
	//ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s;
	//ͨ��ָ����ʽṹ������е�����
	cout << "����:  " << p->name << "����: " << p->age << "����:  " << p->score << endl;
	return 0;
}
