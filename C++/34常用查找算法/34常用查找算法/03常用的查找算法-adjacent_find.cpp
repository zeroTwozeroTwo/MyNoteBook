#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//���ò����㷨adjcent_find

void test01()
{
	vector<int> v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(5);
	v.push_back(3);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "δ�ҵ������ظ�Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ��������ظ�Ԫ��" << *it << endl;
	}
}




int main(int argc, char* argv[])
{
	test01();




	return 0;
}
