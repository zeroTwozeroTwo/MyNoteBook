#include "employee.h"


//���캯��
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//��ȡ��λ����
void Employee::showInfo()
{
	cout << "ְ�����:" << this->m_Id
		<< "\tְ������:" << this->m_Name
		<< "\t��λ:" << this->getDeptName()
		<< "\t��λְ��: ��ɾ�����������" << endl;
}

//��ʾ������Ϣ
string Employee::getDeptName()
{
	return string("Ա��");
}

