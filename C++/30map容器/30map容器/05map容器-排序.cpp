#include <iostream>
using namespace std;
#include <map>

class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		//����
		return v1 > v2;
	}
};

//map���� ����
void printMap(const map<int, int,MyCompare>& m)
{
	for (map<int, int, MyCompare>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "�� = " << it->first << "\tֵ = " << it->second << endl;
	}
	cout << endl;
}


void test01()
{
	map<int, int, MyCompare>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	printMap(m);



}

int main(int argc, char* argv)
{
	test01();


	return 0;
}
