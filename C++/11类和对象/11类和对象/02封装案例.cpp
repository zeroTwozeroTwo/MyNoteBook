#include <iostream>
#include <string>
using namespace std;

//���һ��ѧ����,������������ѧ��
//���Ը�������ѧ�Ÿ�ֵ,������ʾѧ����������ѧ��

//ѧ����
class Student
{
public:

	//���е����Ժ���Ϊ,����ͳһ��Ϊ ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա����
	
	int no;//ѧ��
	string name;//����
	//��Ϊ
	void showNo()//��ʾѧ��
	{
		cout << "ѧ����ѧ��Ϊ:" << no << endl;
	}

	void showName()//��ʾ����
	{
		cout << "ѧ��������Ϊ:" << name << endl;
	}

	//��������ֵ
	void setName(string sname)
	{
		name = sname;
	}

	//��ѧ�Ÿ�ֵ
	void setId(int id)
	{
		no = id;
	}
};

int main(int argc, char* argv[])
{
	//����һ�������ѧ��,ʵ��������
	Student student;
	student.setId(1);
	student.setName("С��");

	student.showNo();
	student.showName();
	return 0;
}