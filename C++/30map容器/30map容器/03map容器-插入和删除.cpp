#include <iostream>
using namespace std;
#include <map>

//map���� �����ɾ��
void printMap(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "\tvalue = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int> m;

	//����
	//��һ��
	m.insert(pair<int, int>(1, 10));

	//�ڶ���
	m.insert(make_pair(2, 20));

	//������
	m.insert(map<int, int>::value_type(3, 30));

	//������
	//[]���������,��; ��������key���ʵ�value
	m[4] = 40;



	printMap(m);

	//ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);//����keyɾ��
	printMap(m);

	//���
	//m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);

}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}