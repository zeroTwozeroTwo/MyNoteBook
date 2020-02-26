#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

//list���� ��ת������
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
	//��ת
	list<int> l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(30);
	l1.push_back(50);
	l1.push_back(70);
	l1.push_back(80);
	l1.push_back(230);

	cout << "��תǰ:" << endl;
	printList(l1);

	cout << "��ת��:" << endl;

	l1.reverse();

	printList(l1);


}

bool myConpare(int v1, int v2)
{
	//���� ���õ�һ���� > �ڶ�����
	return v1 > v2;
}

//����
void test02()
{
	list<int> l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(30);
	l1.push_back(50);
	l1.push_back(70);
	l1.push_back(80);
	l1.push_back(230);

	//����
	cout << "����ǰ:" << endl;
	printList(l1);

	//���в�֧��������ʵ�����������,�������ñ�׼�㷨
	//��֧��������ʵ�����������,�ڲ����ṩһЩ��Ӧ���㷨
	//sort(l1.begin(),l1.end());
	l1.sort();

	cout << "�����:" << endl;
	printList(l1);

	l1.sort(myConpare);
	printList(l1);
}

int main(int argc, char* argv[])
{

	//test01();
	test02();

	return 0;
}