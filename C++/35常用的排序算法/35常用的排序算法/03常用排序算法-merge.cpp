#include <iostream>
using namespace std;
#include <vector>
#include <functional>
#include <algorithm>

//���������㷨 merge
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v1.push_back(i + 1);
	}

	//Ŀ������
	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());//��ǰ��Ŀ����������ռ�
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), vTarget.end(), myPrint);
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}
