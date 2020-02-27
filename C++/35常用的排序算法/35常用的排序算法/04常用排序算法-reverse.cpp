#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

//常用排序算法 reverse
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	cout << "反转前:" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "反转后:" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;




}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}