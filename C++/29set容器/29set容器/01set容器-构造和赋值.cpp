#include <iostream>
using namespace std;
#include <set>

//set��������͸�ֵ
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
	set<int> s;

	//�������� ֻ��insert��ʽ
	s.insert(50);
	s.insert(20);
	s.insert(60);
	s.insert(80);
	s.insert(10);
	s.insert(10);

	//��������
	//set�����ص�:����Ԫ�ز���ʱ���Զ�������
	//set��������Ҫ�����ظ�ֵ
	printSet(s);
	//��������
	set<int> s2(s);
	printSet(s2);


	//��ֵ
	set<int> s3;
	s3 = s2;
	printSet(s3);
}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}