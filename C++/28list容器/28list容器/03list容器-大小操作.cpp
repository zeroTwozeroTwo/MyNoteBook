#include <iostream>
using namespace std;
#include <list>

//list������С����

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList(l1);

	//�ж������Ƿ�Ϊ��
	if (l1.empty())
	{
		cout << "l1Ϊ��" << endl;
	}
	else
	{
		cout << "l1��Ϊ��" << endl;
		cout << "l1��Ԫ�ظ���Ϊ:" << l1.size() << endl;
	}

	//����ָ����С
	l1.resize(10,10000);
	printList(l1);

	l1.resize(2);
	printList(l1);
	
}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}