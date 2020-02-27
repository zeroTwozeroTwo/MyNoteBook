#include "manager.h"


//Ĭ�Ϲ���
Manager::Manager()
{

}

//�вι���
Manager::Manager(string name, string pwd)
{
	//��ʼ������Ա��Ϣ
	this->m_Name = name;
	this->m_Pwd = pwd;

	//��ʼ������ ��ȡ�������ļ��� ѧ������ʦ��Ϣ
	this->initVector();

	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	while (ifs >> com.m_ComId&& ifs >> com.m_MaxNum)
	{
		this->vCom.push_back(com);
	}
	ifs.close();
}
//�˵�����
void Manager::openMenu()
{
	cout << "��ӭ����Ա: " << this->m_Name << " ��¼!" << endl;
	cout << "\t\t --------------------------------------\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              1.����˺�               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              2.�鿴�˺�               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              3.�鿴����               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              4.���ԤԼ               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              0.ע����¼               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t --------------------------------------\n";
	cout << "��ѡ�����Ĳ���: " << endl;
}
//����˺�
void Manager::addPerson()
{
	cout << "����������˺ŵ�����" << endl;
	cout << "1.���ѧ��" << endl;
	cout << "2.�����ʦ" << endl;

	string fileName;//�����ļ���
	string tip;//��ʾid��
	string errorTip;//�ظ�������ʾ
	ofstream ofs;//�ļ���������

	int select = 0;
	cin >> select;//�����û�ѡ��

	if (select == 1)
	{
		//��ӵ���ѧ��
		fileName = STUDENT_FILE;
		tip = "������ѧ��:";
		errorTip = "ѧ���ظ�,����������";
	}
	else
	{
		fileName = TEACHER_FILE;
		tip = "������ְ�����";
		errorTip = "ְ�����ظ�,����������";
	}
	//����׷�ӵķ�ʽд�ļ�
	ofs.open(fileName, ios::out | ios::app);

	int id;//ѧ�Ż���ְ����
	string name;//����
	string pwd;//����


	cout << tip << endl;
	while (true)
	{
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret)
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}

	cout << "����������:" << endl;
	cin >> name;

	cout << "����������:" << endl;
	cin >> pwd;

	//���ļ����������
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ�" << endl;

	system("pause");
	system("cls");

	ofs.close();

	//���ó�ʼ�������ӿ�,���»�ȡ�ļ��е�����
	this->initVector();

}

void printStudent(Student& student)
{
	cout << "ѧ��:" << student.m_Id << "\t����:" << student.m_Name << "\t����:" << student.m_Pwd << endl;
}


void printTeacher(Teacher& Teacher)
{
	cout << "ְ����:" << Teacher.m_EmpId << "\t����:" << Teacher.m_Name << "\t����:" << Teacher.m_Pwd << endl;
}


//�鿴�˺�
void Manager::showPerson()
{
	cout << "��ѡ��鿴������:" << endl;
	cout << "1.�鿴���е�ѧ��" << endl;
	cout << "2.�鿴���е���ʦ" << endl;

	int select = 0;//�����û�ѡ��
	cin >> select;

	if (select == 1)
	{
		//�鿴ѧ��
		cout << "���е�ѧ����Ϣ����:" << endl;
		for_each(vStu.begin(), vStu.end(), printStudent);
	}
	else
	{
		//�鿴��ʦ
		cout << "���е���ʦ��Ϣ����:" << endl;
		for_each(vTea.begin(), vTea.end(), printTeacher);
	}

	system("pause");
	system("cls");

}
//�鿴������Ϣ
void Manager::showComputer()
{
	cout << "��������Ϣ����:" << endl;
	for (vector<ComputerRoom>::const_iterator it = this->vCom.begin(); it != this->vCom.end(); it++)
	{
		cout << "�������: " << it->m_ComId << "\t�����������: " << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");
}
//���ԤԼ��¼
void Manager::cleanFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();

	cout << "��ճɹ�!" << endl;
	system("pause");
	system("cls");
}

//��ʼ������
void Manager::initVector()
{
	//ȷ���������״̬
	this->vStu.clear();
	this->vTea.clear();
	//��ȡ��Ϣ	ѧ��.��ʦ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	Student s;
	while (ifs >> s.m_Id&& ifs >> s.m_Name&& ifs >> s.m_Pwd)
	{
		vStu.push_back(s);
	}
	//cout << "��ǰѧ������Ϊ: " << vStu.size() << endl;
	ifs.close();

	//��ȡ��Ϣ ��ʦ
	ifs.open(TEACHER_FILE, ios::in);
	Teacher t;
	while (ifs >> t.m_EmpId&& ifs >> t.m_Name&& ifs >> t.m_Pwd)
	{
		vTea.push_back(t);
	}
	//cout << "��ǰ��ʦ����Ϊ: " << vTea.size() << endl;
	ifs.close();
}

//����ظ� ����1 ����,����2 �������
bool Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		//���ѧ��
		for (vector<Student>::const_iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->m_Id)
			{
				return true;
			}
		}
	}
	else
	{
		//�����ʦ
		for (vector<Teacher>::const_iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->m_EmpId)
			{
				return true;
			}
		}
	}

	return false;
}