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
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;

		//将员工放入到容器中
		v.push_back(worker);
	}
}

//员工分组
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptId = rand() % 3;

		//将员工插入到分组中
		//key部门编号	,value具体员工
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(const multimap<int, Worker>& m)
{
	cout << "策划部门:" << endl;
	multimap<int, Worker>::const_iterator pos = m.find(CHEHUA);

	int count = m.count(CHEHUA);//统计具体人数
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.m_Name << "\t工资" << pos->second.m_Salary << endl;
	}

	cout << "--------------------------" << endl;
	cout << "美术部门:" << endl;
	count = m.count(CHEHUA);//统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.m_Name << "\t工资" << pos->second.m_Salary << endl;
	}

	cout << "--------------------------" << endl;
	cout << "研发部门:" << endl;
	count = m.count(YAFAN);//统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名:" << pos->second.m_Name << "\t工资" << pos->second.m_Salary << endl;
	}
}

int main(int argc, char* argv[])
{
	srand((unsigned int)time(NULL));
	//1.创建员工
	vector<Worker> workers;
	createWorker(workers);


	//2.员工分组
	multimap<int, Worker> mWorker;
	setGroup(workers, mWorker);

	//3.分组显示员工
	showWorkerByGroup(mWorker);


	//测试
	//for (vector<Worker>::iterator it = workers.begin(); it != workers.end(); it++)
	//{
	//	cout << "姓名:" << it->m_Name << "\t薪资:" << it->m_Salary << endl;
	//}


	return 0;
}
