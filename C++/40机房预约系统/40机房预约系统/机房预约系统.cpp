#include <iostream>
using namespace std;
#include "Identity.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"
#include <fstream>
#include <string>
#include "globalFile.h"
#include <cstdlib>


//�����ʦ�Ӳ˵�����
void teacherMenu(Identity *& teacher)
{
	while (true)
	{
		teacher->openMenu();

		Teacher* t = (Teacher*)teacher;

		int select = 0;//�����û�ѡ��

		cin >> select;

		switch (select)
		{
		case 1://�鿴����ԤԼ 
			t->showAllOrder();
			break;
		case 2://���ԤԼ
			t->validOrder();
			break;
		default:
			delete t;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

//����ѧ���Ӳ˵�����
void studentMenu(Identity*& student)
{
	while (true)
	{
		//����ѧ���Ӳ˵�
		student->openMenu();

		Student* s = (Student*)student;

		int select = 0;
		cin >> select;//�����û�ѡ��

		switch (select)
		{
		case 1://����ԤԼ
			s->applyOrder();
			break;
		case 2://�鿴����ԤԼ
			s->showMyOrder();
			break;
		case 3://�鿴������ԤԼ
			s->showAllOrder();
			break;
		case 4://ȡ��ԤԼ
			s->cancelOrder();
			break;
		default://ע����¼
			delete student;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

//�������Ա�Ӳ˵�����
void managerMenu(Identity*& manager)
{
	while (true)
	{
		//���ù���Ա�Ӳ˵�
		manager->openMenu();
		//������ָ��	תΪ����ָ��,���������������ӿ�
		Manager* man = (Manager*)manager;
		int select = 0;
		//�����û�ѡ��
		cin >> select;

		switch (select)
		{
		case 1://����˺�
			//cout << "����˺�" << endl;
			man->addPerson();
			break;
		case 2://�鿴�˺�
			//cout << "�鿴�˺�" << endl;
			man->showPerson();
			break;
		case 3://�鿴����
			//cout << "�鿴����" << endl;
			man->showComputer();
			break;
		case 4://���ԤԼ
			//cout << "���ԤԼ" << endl;
			man->cleanFile();
			break;
		default:
			delete manager;//���ٵ���������
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

//��¼���� ����1 �����ļ���		����2  �����������
void LoginIn(string fileName, int type)
{
	//����ָ��	����ָ���������
	Identity* person = NULL;

	//���ļ�
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ж��ļ��Ƿ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������!" << endl;
		ifs.close();
		return;
	}

	//׼�������û�����Ϣ
	int id = 0;
	string name;
	string pwd;

	//�ж����
	if (type == 1)
	{
		cout << "���������ѧ��:" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "����������ְ����" << endl;
		cin >> id;
	}

	cout << "�������û���:" << endl;
	cin >> name;

	cout << "����������:" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//ѧ�������֤
		int fId;//���ļ��ж�ȡ��id��
		string fName;//���ļ��л�ȡ������
		string fPwd;//���ļ��л�ȡ������
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//���û��������Ϣ���Ա�
			if (fId == id && fName == name && fPwd == pwd)
			{

				cout << "ѧ����֤��¼�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//����ѧ����ݵ��Ӳ˵�
				studentMenu(person);

				
				return;
			}
		}
	}
	else if (type == 2)
	{
		//��ʦ�����֤
		int fId;//���ļ��ж�ȡ��id��
		string fName;//���ļ��л�ȡ������
		string fPwd;//���ļ��л�ȡ������
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "��ʦ��¼��֤�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//�����ʦ�Ӳ˵�
				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա�����֤
		string fName;//���ļ��л�ȡ������
		string fPwd;//���ļ��л�ȡ������
		while (ifs >> fName && ifs >> fPwd)
		{
			if (fName == name && fPwd == pwd)
			{
				cout << "����Ա��֤��¼�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				//�������Ա�Ӳ˵�����
				managerMenu(person);

				return;
			}
		}
	}

	cout << "��֤��¼ʧ��!" << endl;
	system("pause");
	system("cls");

}



int main(int argc, char* argv[])
{
	int select = 0;//���ڽ����û���ѡ��
	while (true)
	{
		cout << "========================== ��ӭ��������ԤԼϵͳ ==========================" << endl;
		cout << endl << "�������������:" << endl;
		cout << "\t\t ----------------------------\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t|         1.ѧ������         |\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t|         2.��    ʦ         |\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t|         3.�� �� Ա         |\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t|         0.��    ��         |\n";
		cout << "\t\t|                            |\n";
		cout << "\t\t ----------------------------\n";
		cout << "����������ѡ��:";
		cin >> select;//�����û�ѡ��

		switch (select)//�����û�ѡ�� ʵ�ֲ�ͬ�ӿ�
		{
		case 1://ѧ�����
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://��ʦ���
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3://����Ա���
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0://�˳�ϵͳ
			cout << "��ӭ��һ��ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������,������ѡ��!" << endl;
			system("pause");
			break;
		}
	}


	return 0;
}
