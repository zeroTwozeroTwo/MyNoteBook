#include <iostream>
using namespace std;
#include <set>

//set���� ���Һ�ͳ��
void printSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	//����
	set<int> s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	s1.insert(50);

	set<int>::iterator pos = s1.find(200);

	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ��:" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

}

//ͳ��
void test02()
{

	//����
	set<int> s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	s1.insert(50);


	int num = s1.count(30);
	//����set���� ͳ�ƽ�� Ҫô��0 Ҫô��1
	cout << "num = " << num << endl;
	
}


int main(int argc, char* argv[])
{
	//test01();
	test02();



	return 0;
}