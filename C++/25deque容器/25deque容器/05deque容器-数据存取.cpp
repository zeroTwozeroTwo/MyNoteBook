#include <iostream>
using namespace std;
#include <deque>


//deque�������ݴ�ȡ
void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(100);
	d.push_back(200);
	d.push_back(300);

	//ͨ��[]��ʽ����Ԫ��
	for(int i = 0;i < d.size();i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;

	//ͨ��at��ʽ����Ԫ��
	for(int i = 0;i < d.size();i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ��Ϊ:" << d.front() << endl;
	cout << "���һ��Ԫ��:" << d.back() << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}