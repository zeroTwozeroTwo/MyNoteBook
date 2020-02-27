#include "student.h"

//Ĭ�Ϲ���
Student::Student()
{

}

//�вι��� ����:ѧ��,����,����
Student::Student(int id, string name, string pwd)
{
	//��ʼ������
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "��ȡʧ��" << endl;
		ifs.close();
		return;
	}

	ComputerRoom com;
	while (ifs >> com.m_ComId&& ifs >> com.m_MaxNum)
	{
		//����ȡ����Ϣ���뵽 ������
		this->vCom.push_back(com);
	}
	ifs.close();
}

//�˵�����
void Student::openMenu()
{
	cout << "��ӭѧ������: " << this->m_Name << " ��¼!" << endl;
	cout << "\t\t --------------------------------------\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              1.����ԤԼ               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              2.�鿴�ҵ�ԤԼ           |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              3.�鿴����ԤԼ           |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              4.ȡ��ԤԼ               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t|              0.ע����¼               |\n";
	cout << "\t\t|                                       |\n";
	cout << "\t\t --------------------------------------\n";
	cout << "��ѡ�����Ĳ���: " << endl;
}

//����ԤԼ
void Student::applyOrder()
{
	cout << "��������ʱ��Ϊ��һ������" << endl;
	cout << "����������ԤԼ��ʱ��" << endl;
	cout << "1.��һ" << endl;
	cout << "2.�ܶ�" << endl;
	cout << "3.����" << endl;
	cout << "4.����" << endl;
	cout << "5.����" << endl;

	int date = 0;//����
	int interval = 0;//ʱ���
	int room = 0;//�������

	while (true)
	{
		cin >> date;
		if (date >= 1 && date <= 5)
		{
			break;
		}
		cout << "��������,����������" << endl;
	}
	cout << "����������ԤԼ��ʱ���:" << endl;
	cout << "1.����" << endl;
	cout << "2.����" << endl;

	while (true)
	{
		cin >> interval;
		if (interval == 1 || interval == 2)
		{
			break;
		}
		cout << "��������,����������" << endl;
	}

	cout << "��ѡ�����:" << endl;
	for (int i = 0; i < this->vCom.size(); i++)
	{
		cout << this->vCom[i].m_ComId << "��\t��������Ϊ: " << this->vCom[i].m_MaxNum << endl;
	}

	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "��������,����������" << endl;
	}

	cout << "ԤԼ�ɹ�!�����" << endl;
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->m_Id << " ";
	ofs << "stuName:" << this->m_Name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;
	ofs.close();

	system("pause");
	system("cls");
}
//�鿴����ԤԼ
void Student::showMyOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		//string ת int
		//string ���� c_str() ת const char*
		//����atoi(const char *)תint
		if (this->m_Id == atoi(of.m_OrderData[i]["stuId"].c_str()))//�ҵ�����ԤԼ
		{
			cout << "ԤԼ����: ��" << of.m_OrderData[i]["date"] << "\t";
			cout << "ʱ���: " << (of.m_OrderData[i]["interval"] == "1" ? "����" : "����") << "\t";
			cout << "������:" << of.m_OrderData[i]["roomId"] << "\t";
			string status = "״̬: ";
			//1.����� 2.��ԤԼ -1.ԤԼʧ�� 0.ȡ��ԤԼ
			switch (atoi(of.m_OrderData[i]["status"].c_str()))
			{
			case 1://�����
				status += "�����";
				break;
			case 2://��ԤԼ
				status = "��ԤԼ";
				break;
			case -1://ԤԼʧ��
				status += "ԤԼʧ��,���δͨ��";
				break;
			case 0://ȡ��ԤԼ
				status = "ԤԼ��ȡ��";
				break;
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
}
//�鿴����ԤԼ
void Student::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << ".";
		cout << "ԤԼ����: ��" << of.m_OrderData[i]["date"] << "\t";
		cout << "ʱ���: " << (of.m_OrderData[i]["interval"] == "1" ? "����" : "����") << "\t";
		cout << "ѧ��: " << of.m_OrderData[i]["stuId"] << "\t";
		cout << "����: " << of.m_OrderData[i]["stuName"] << "\t";
		cout << "������:" << of.m_OrderData[i]["roomId"] << "\t";
		string status = "״̬: ";
		//1.����� 2.��ԤԼ -1.ԤԼʧ�� 0.ȡ��ԤԼ
		switch (atoi(of.m_OrderData[i]["status"].c_str()))
		{
		case 1://�����
			status += "�����";
			break;
		case 2://��ԤԼ
			status = "��ԤԼ";
			break;
		case -1://ԤԼʧ��
			status += "ԤԼʧ��,���δͨ��";
			break;
		case 0://ȡ��ԤԼ
			status = "ԤԼ��ȡ��";
			break;
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}
//ȡ��ԤԼ
void Student::cancelOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ��,������ȡ���ļ�¼" << endl;

	vector<int> v;//�������������е��±���
	int index = 1;
	for (int i = 0; i < of.m_Size; i++)
	{
		//���ж��������ѧ��
		if (this->m_Id == atoi(of.m_OrderData[i]["stuId"].c_str()))
		{
			//��ɸѡ״̬	����л�ԤԼ�ɹ�
			if (of.m_OrderData[i]["status"] == "1" || of.m_OrderData[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index++ << ".";
				cout << "ԤԼ����: ��" << of.m_OrderData[i]["date"] << "\t";
				cout << "ʱ���: " << (of.m_OrderData[i]["interval"] == "1" ? "����" : "����") << "\t";
				cout << "������: " << of.m_OrderData[i]["roomId"] << "\t";
				string status = "״̬: ";
				switch (atoi(of.m_OrderData[i]["status"].c_str()))
				{
				case 1:
					status += "�����";
					break;
				case 2:
					status = "ԤԼ�ɹ�";
					break;
				}
				cout << status << endl;
			}
		}
	}

	cout << "������ȡ���ļ�¼,0������" << endl;
	int select = 0;
	while (true)
	{
		cin >> select;
		if(select >= 0 && select <= v.size())
		{
			if(select == 0)
			{
				
				break;
			}
			else
			{
				of.m_OrderData[v[select - 1]]["status"] = "0";

				of.updateOrder();

				cout << "��ȡ��ԤԼ" << endl;
				break;
			}
		}
		cout << "��������,����������" << endl;
	}
	system("pause");
	system("cls");
}