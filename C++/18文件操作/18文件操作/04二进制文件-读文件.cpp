#include <iostream>
using namespace std;
#include <fstream>

//�������ļ�	���ļ�
class Person
{
public:
	char m_Name[64];//����
	int m_Age;//����
};


void test01()
{
	//1.����ͷ�ļ�

	//2.����������
	ifstream ifs;
	//3.���ļ� �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}
	//4.���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << "����: " << p.m_Name << endl;
	cout << "���� :" << p.m_Age << endl;
	//5.�ر��ļ�
	ifs.close();
}



int main(int argc, char* argv[])
{

	test01();



	return 0;
}