#include <iostream>
using namespace std;
#include <vector>
#include <functional>
#include <algorithm>

//常用排序算法 merge
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

	//目标容器
	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());//提前给目标容器分配空间
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), vTarget.end(), myPrint);
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}
