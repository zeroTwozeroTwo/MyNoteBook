#include "teacher.h"

//Ĭ�Ϲ���
Teacher::Teacher()
{

}

//�вι���
Teacher::Teacher(int empId, string name, string pwd)
{
	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//�˵�����
void Teacher::openMenu()
{
	cout << "��ӭ��ʦ: " << this->m_Name << " ��¼!" << endl;
	cout << "\t\t --------------------------------------\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              1.�鿴����ԤԼ           |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              2.���ԤԼ               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              0.ע����¼               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t --------------------------------------\n";
	cout << "��ѡ�����Ĳ���: " << endl;
}
//�鿴����ԤԼ
void Teacher::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << ".";
		cout << "ԤԼ����: ��" << of.m_OrderData[i]["date"] << "\t";
		cout << "ʱ���:" << (of.m_OrderData[i]["interval"] == "1" ? "����" : "����") << "\t";
		cout << "ѧ��: " << of.m_OrderData[i]["stuId"] << "\t";
		cout << "����: " << of.m_OrderData[i]["stuName"] << "\t";
		cout << "�������" << of.m_OrderData[i]["roomId"] << "\t";
		string status = "״̬: ";
		//1.����� 2.��ԤԼ	-1.ԤԼʧ��	0.ȡ��ԤԼ
		switch (atoi(of.m_OrderData[i]["status"].c_str()))
		{
		case 1:
			status += "�����";
			break;
		case 2:
			status += "ԤԼ�ɹ�";
			break;
		case -1:
			status += "ԤԼʧ��,���δͨ��";
			break;
		case 0:
			status += "ȡ��ԤԼ";
			break;
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

//���ԤԼ
void Teacher::validOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	vector<int> v;
	int index = 0;
	cout << "����˵�ԤԼ��¼����: " << endl;
	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_OrderData[i]["status"] == "1")
		{
			v.push_back(i);
			cout << ++index << ".";
			cout << "ԤԼ����: ��" << of.m_OrderData[i]["date"] << "\t";
			cout << "ʱ���: " << (of.m_OrderData[i]["interval"] == "1" ? "����" : "����") << "\t";
			cout << "ѧ�����: " << of.m_OrderData[i]["stuId"] << "\t";
			cout << "ѧ������: " << of.m_OrderData[i]["stuName"] << "\t";
			cout << "�������: " << of.m_OrderData[i]["roomId"] << "\t";
			cout << "״̬: �����" << endl;
		}
	}

	cout << "��������˵�ԤԼ��¼,0������" << endl;
	int select = 0;//�����û�ѡ���ԤԼ��¼
	int ret = 0;//����ԤԼ�����¼

	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "��������˽��" << endl;
				cout << "1.ͨ��" << endl;
				cout << "2.��ͨ��" << endl;
				cin >> ret;
				if (ret == 1)
				{
					//ͨ�����
					of.m_OrderData[v[select - 1]]["status"] = "2";
				}
				else
				{
					//��ͨ�����
					of.m_OrderData[v[select - 1]]["status"] = "-1";
				}
				of.updateOrder();//����ԤԼ��¼
				cout << "������" << endl;
				break;
			}
		}
		cout << "��������,����������" << endl;
	}
	system("pause");
	system("cls");
}