#include <iostream>
using namespace std;

//1.����ѧ����������:ѧ������(����,����,����)
//�Զ�����������,һЩ���ͼ�����ɵ�һ������
//�﷨ struct ���͵�����{��Ա�б�}
struct Student
{
	//��Ա�б�
	string name;
	int age;
	int score;
};

//2.1 struct Student s1;
//2.2 struct Student s2 = {......};
//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

int main(int argc, char* argv[])
{
	//struct �ؼ��ֿ���ʡ��
	struct Student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 20;

	cout << "����:" << s1.name << "  "<< "����:" << s1.age << "����:" << s1.score << endl;
	
	return 0;
}
