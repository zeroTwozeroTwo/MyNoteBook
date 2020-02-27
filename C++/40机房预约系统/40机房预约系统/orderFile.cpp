#include "orderFile.h"

//�ָ��ַ���
void orderSplit(string str, map<string, string>& m)
{
	int pos = str.find(":");
	if (pos != -1) {
		string key = str.substr(0, pos);
		string value = str.substr(pos + 1, str.size() - pos - 1);
		m.insert(make_pair(key, value));
	}
}

//���캯��
OrderFile::OrderFile()
{
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string date;//����
	string interval;//ʱ���
	string stuId;//ѧ�����
	string stuName;//ѧ������
	string roomId;//�������
	string status;//ԤԼ״̬
	this->m_Size = 0;//��¼����

	while (ifs >> date && ifs >> interval && ifs >> stuId && ifs >> stuName && ifs >> roomId && ifs >> status)
	{
		//cout << date << endl;
		//cout << interval << endl;
		//cout << stuId << endl;
		//cout << stuName << endl;
		//cout << roomId << endl;
		//cout << status << endl;
		map<string, string> m;
		//��ȡ����
		orderSplit(date, m);
		//��ȡʱ���
		orderSplit(interval, m);
		//��ȡѧ��
		orderSplit(stuId, m);
		//��ȡ����
		orderSplit(stuName, m);
		//��ȡ������
		orderSplit(roomId, m);
		//��ȡ״̬
		orderSplit(status, m);
		//��Сmap�������뵽���map������
		this->m_OrderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();

	//�������map����
	//for (map<int, map<string, string>>::iterator it = this->m_OrderData.begin(); it != this->m_OrderData.end(); it++)
	//{
	//	cout << "����Ϊ = " << it->first + 1 << "\tvalue = " << endl;
	//	for (map<string, string>::iterator mIt = it->second.begin(); mIt != it->second.end(); mIt++)
	//	{
	//		cout << "key = " << mIt->first << "\tvalue = " << mIt->second << endl;
	//	}
	//}
}


//����ԤԼ��¼
void OrderFile::updateOrder()
{
	if (this->m_Size == 0)
	{
		return;//ԤԼ��¼0��,ֱ��return
	}

	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
	for (int i = 0; i < this->m_Size; i++)
	{
		ofs << "date:" << this->m_OrderData[i]["date"] << " ";
		ofs << "interval:" << this->m_OrderData[i]["interval"] << " ";
		ofs << "stuId:" << this->m_OrderData[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_OrderData[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_OrderData[i]["roomId"] << " ";
		ofs << "status:" << this->m_OrderData[i]["status"] << endl;
	}
	ofs.close();
}

//��������
OrderFile::~OrderFile()
{

}