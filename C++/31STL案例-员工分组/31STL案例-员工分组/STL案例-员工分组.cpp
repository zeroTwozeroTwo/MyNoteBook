#include <iostream>
using namespace std;
#include <map>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>

#define CHEHUA 0
#define MEISHU 1
#define YAFAN 2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};


void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;

		//��Ա�����뵽������
		v.push_back(worker);
	}
}

//Ա������
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3;

		//��Ա�����뵽������
		//key���ű��	,value����Ա��
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(const multimap<int, Worker>& m)
{
	cout << "�߻�����:" << endl;
	multimap<int, Worker>::const_iterator pos = m.find(CHEHUA);

	int count = m.count(CHEHUA);//ͳ�ƾ�������
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����:" << pos->second.m_Name << "\t����" << pos->second.m_Salary << endl;
	}

	cout << "--------------------------" << endl;
	cout << "��������:" << endl;
	count = m.count(CHEHUA);//ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����:" << pos->second.m_Name << "\t����" << pos->second.m_Salary << endl;
	}

	cout << "--------------------------" << endl;
	cout << "�з�����:" << endl;
	count = m.count(YAFAN);//ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����:" << pos->second.m_Name << "\t����" << pos->second.m_Salary << endl;
	}
}

int main(int argc, char* argv[])
{
	srand((unsigned int)time(NULL));
	//1.����Ա��
	vector<Worker> workers;
	createWorker(workers);


	//2.Ա������
	multimap<int, Worker> mWorker;
	setGroup(workers, mWorker);

	//3.������ʾԱ��
	showWorkerByGroup(mWorker);


	//����
	//for (vector<Worker>::iterator it = workers.begin(); it != workers.end(); it++)
	//{
	//	cout << "����:" << it->m_Name << "\tн��:" << it->m_Salary << endl;
	//}


	return 0;
}
