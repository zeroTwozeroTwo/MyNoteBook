#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

//�ڽ��������� - ��ϵ�º���
//����greater
class MyCompare
{
public:

	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test01()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	v.push_back(70);
	v.push_back(60);
	v.push_back(80);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//����
	//sort(v.begin(), v.end(), MyCompare());
	//greater<int>() �ڽ���������
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}
