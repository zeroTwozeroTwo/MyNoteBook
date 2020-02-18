#include <iostream>
#include <stdlib.h>
#include <string>
#define MAX 1000
using namespace std;
//��װ������ʾ���� ��void showMenu()
//��main�����е��÷�װ�õĺ���

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};

//���ͨѶ¼�ṹ��
struct AddressBooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1.�����ϵ��
void addPerson(struct AddressBooks* address_books)
{
	//�ж�ͨѶ¼ʱ������,�������,�Ͳ������
	if (address_books->m_Size == MAX)
	{
		cout << "ͨѶ¼����,�޷����!" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "����������:" << endl;
		cin >> name;
		address_books->personArray[address_books->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�:  " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			//����������1 ����2 �����˳�ѭ��,��Ϊ���������ȷֵ
			//�����������,��������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				address_books->personArray[address_books->m_Size].m_Sex = sex;
				break;
			}
			cout << "��������,����������" << endl;
		}
		//����
		cout << "����������: " << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age >= 0 && age <= 120)
			{
				address_books->personArray[address_books->m_Size].m_Age = age;
				break;
			}
			cout << "��������,����������" << endl;
		}
		//�绰
		cout << "��������ϵ�绰:" << endl;
		string phone;
		cin >> phone;
		address_books->personArray[address_books->m_Size].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ:" << endl;
		string address;
		cin >> address;
		address_books->personArray[address_books->m_Size].m_Addr = address;
		//����ͨѶ¼����
		address_books->m_Size++;//++���������ϵ�����
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}

//2.��ʾ������ϵ��
void showPerson(const struct AddressBooks* address_books)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0,���Ϊ0,��ʾ��¼Ϊ��
	//�����Ϊ0,��ʾ��¼����ϵ����Ϣ
	if (address_books->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		//�����ͷ
		cout << "����" << "\t" << "�Ա�" << "\t" << "����" << "\t" << "�绰" << "\t" << "סַ" << "\t" << endl;
		for (int i = 0; i < address_books->m_Size; i++)
		{
			cout << address_books->personArray[i].m_Name << "\t"
				<< (address_books->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t"
				<< address_books->personArray[i].m_Age << "\t"
				<< address_books->personArray[i].m_Phone << "\t"
				<< address_books->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ����,�������,������ϵ�����������еľ���λ��,�����ڷ���-1
//����1 ͨѶ¼  ����2 �Ա�����
int isExist(struct AddressBooks* address_books, string name)
{
	for (int i = 0; i < address_books->m_Size; i++)
	{
		//�ȶ��û���
		if (address_books->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;//���û�ҵ�����-1
}

//3.ɾ��ָ����ϵ��
void deletePerson(struct AddressBooks* address_books)
{
	cout << "��������Ҫɾ������ϵ��:" << endl;
	string name;
	cin >> name;
	int ret = isExist(address_books, name);
	if (ret != -1)//�ҵ�����ϵ��
	{
		//���ҵ���,Ҫ����ɾ������
		for (int i = ret; i < address_books->m_Size; i++)
		{
			//����ǰ��
			address_books->personArray[i] = address_books->personArray[i + 1];
		}
		//����ͨѶ¼�е���Ա��
		address_books->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else//δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}


//4.����ָ����ϵ����Ϣ
void findPerson(struct AddressBooks* address_books)
{
	cout << "��������Ҫ���ҵ���ϵ��: " << endl;
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ����
	int ret = isExist(address_books, name);
	if (ret != -1)//�ҵ�����ϵ��
	{
		cout << "����: " << address_books->personArray[ret].m_Name << "\t"
			<< "�Ա�: " << address_books->personArray[ret].m_Sex << "\t"
			<< "����: " << address_books->personArray[ret].m_Age << "\t"
			<< "�绰: " << address_books->personArray[ret].m_Phone << "\t"
			<< "סַ: " << address_books->personArray[ret].m_Addr << endl;
	}
	else//δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
	}
	//����
	system("pause");
	system("cls");
}


//5.�޸�ָ����ϵ����Ϣ
void modifyPerson(struct AddressBooks* address_books)
{
	cout << "��������Ҫ�޸ĵ���ϵ��:" << endl;
	string name;
	cin >> name;
	int ret = isExist(address_books, name);

	if (ret != -1)
	{
		//����
		string name;
		cout << "����������: " << endl;
		cin >> name;
		address_books->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������Ա�:  " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			//����������1 ����2 �����˳�ѭ��,��Ϊ���������ȷֵ
			//�����������,��������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				address_books->personArray[address_books->m_Size].m_Sex = sex;
				break;
			}
			cout << "��������,����������" << endl;
		}
		//����
		cout << "����������: " << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age >= 0 && age <= 120)
			{
				address_books->personArray[address_books->m_Size].m_Age = age;
				break;
			}
			cout << "��������,����������" << endl;
		}
		//�绰
		cout << "��������ϵ�绰: " << endl;
		string phone;
		cin >> phone;
		address_books->personArray[ret].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ: " << endl;
		string address;
		cin >> address;
		address_books->personArray[ret].m_Addr = address;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}


//6.���������ϵ��
void cleanPerson(struct AddressBooks* address_books)
{
	cout << "�Ƿ�Ҫ���?" << endl;
	cout << "0 --- �����" << endl;
	cout << "1 --- ���" << endl;
	int select = 0;//��¼�û�ѡ��
	cin >> select;
	if (select)
	{
		address_books->m_Size = 0;//����ǰ��¼��ϵ��������Ϊ0,���߼���ղ���
		cout << "ͨѶ¼�����" << endl;
		//�����������
	}
	else
	{
		cout << "�������˵�..." << endl;
	}
	system("pause");
	system("cls");
}


//�˵�����
void showMneu()
{
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl;
	cout << "*****  6.�����ϵ��  *****" << endl;
	cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;
}

int main(int argc, char* argv[])
{
	//����ͨѶ¼�ṹ�����
	struct AddressBooks address_books;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	address_books.m_Size = 0;

	int select = 0;
	while (true)
	{
		//��ʾ�˵�
		showMneu();

		cin >> select;
		switch (select)
		{
		case 1://1.�����ϵ��
			addPerson(&address_books);//���õ�ַ����,��������ʵ��
			break;
		case 2://2.��ʾ��ϵ��
			showPerson(&address_books);
			break;
		case 3://3.ɾ����ϵ��
			deletePerson(&address_books);
			break;
		case 4://4.������ϵ��
			findPerson(&address_books);
			break;
		case 5://5.�޸���ϵ��
			modifyPerson(&address_books);
			break;
		case 6://6.�����ϵ��
			cleanPerson(&address_books);
			break;
		case 0://0.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			exit(0);
		default://����ѡ��
			cout << "ѡ�����������ѡ��" << endl;
			break;
		}
	}
	return 0;
}
