#include <iostream>
using namespace std;
#include <map>


//map���� - ��С�ͽ���

//��С
void test01()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	if(m.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "������СΪ:" << m.size() << endl;
	}

	
}


void printMap(const map<int, int>& m)
{
	for(map<int,int>::const_iterator it = m.begin();it!=m.end();it++)
	{
		cout << "ֵ = " << it->first << "\t�� = " << it->second << endl;
	}
	cout << endl;
}
//����
void test02()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));


	map<int, int> m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));
	m2.insert(pair<int, int>(7, 400));


	cout << "����ǰ:" << endl;
	printMap(m);
	printMap(m2);

	cout << "������:" << endl;
	m.swap(m2);
	printMap(m);
	printMap(m2);

	
}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	


	return 0;
}