#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//��Ԫν��
class MyCompare
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};

void test01()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());
	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//ʹ�ú�������,�ı��㷨����,��Ϊ�������Ϊ�Ӵ�С
	cout << "------------------" << endl;
	sort(v.begin(), v.end(), MyCompare());
	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
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