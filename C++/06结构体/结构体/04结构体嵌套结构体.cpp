#include <iostream>
using namespace std;
#include <string>


struct Student
{
	string name;//����
	int age;//����
	int score;//���Է���
};

//������ʦ�ṹ��
struct teacher
{
	int id;//��ʦ���
	string name;//��ʦ����
	int age;//����
	struct Student stu;
};


int main(int argc, char* argv[])
{
	struct teacher t;
	t.id = 1000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 18;
	t.stu.score = 60;

	cout << "��ʦ������:  " << t.name << "��ʦ���:  " << t.id << "��ʦ������:  " << t.age
		<< "��ʦ������ѧ������: " << t.stu.name << "ѧ������: " << t.stu.age << "ѧ�����Է���Ϊ: "
		<< t.stu.score << endl;
	return 0;
}
