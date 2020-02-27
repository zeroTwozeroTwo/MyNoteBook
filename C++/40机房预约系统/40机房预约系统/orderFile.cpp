#include "orderFile.h"

//分割字符串
void orderSplit(string str, map<string, string>& m)
{
	int pos = str.find(":");
	if (pos != -1) {
		string key = str.substr(0, pos);
		string value = str.substr(pos + 1, str.size() - pos - 1);
		m.insert(make_pair(key, value));
	}
}

//构造函数
OrderFile::OrderFile()
{
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string date;//日期
	string interval;//时间段
	string stuId;//学生编号
	string stuName;//学生姓名
	string roomId;//机房编号
	string status;//预约状态
	this->m_Size = 0;//记录条数

	while (ifs >> date && ifs >> interval && ifs >> stuId && ifs >> stuName && ifs >> roomId && ifs >> status)
	{
		//cout << date << endl;
		//cout << interval << endl;
		//cout << stuId << endl;
		//cout << stuName << endl;
		//cout << roomId << endl;
		//cout << status << endl;
		map<string, string> m;
		//截取日期
		orderSplit(date, m);
		//截取时间段
		orderSplit(interval, m);
		//截取学号
		orderSplit(stuId, m);
		//截取姓名
		orderSplit(stuName, m);
		//截取机房号
		orderSplit(roomId, m);
		//截取状态
		orderSplit(status, m);
		//将小map容器放入到打的map容器中
		this->m_OrderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();

	//测试最大map容器
	//for (map<int, map<string, string>>::iterator it = this->m_OrderData.begin(); it != this->m_OrderData.end(); it++)
	//{
	//	cout << "条数为 = " << it->first + 1 << "\tvalue = " << endl;
	//	for (map<string, string>::iterator mIt = it->second.begin(); mIt != it->second.end(); mIt++)
	//	{
	//		cout << "key = " << mIt->first << "\tvalue = " << mIt->second << endl;
	//	}
	//}
}


//更新预约记录
void OrderFile::updateOrder()
{
	if (this->m_Size == 0)
	{
		return;//预约记录0条,直接return
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

//析构函数
OrderFile::~OrderFile()
{

}