#include <iostream>
using namespace std;
#include <string>

//constʹ�ó���
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};

//�������е��βθ�Ϊָ��,���Լ����ڴ�ռ�,���Ҳ��Ḵ���µĸ�������
void printStudent(const struct Student* s)
{
	//����const֮��,һ�����޸ĵĲ����ͻᱨ��,���Է�ֹ���ǵ������
	cout << "����: " << s->name << "����: " << s->age << "�÷�: " << s->score << endl;
}

int main(int argc, char* argv[])
{
	//�����ṹ�����
	struct Student s = { "����",18,79 };
	printStudent(s);
	return 0;
}
