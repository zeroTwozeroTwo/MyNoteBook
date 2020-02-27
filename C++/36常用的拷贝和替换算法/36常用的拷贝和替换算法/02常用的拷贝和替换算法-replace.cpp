#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


//常用拷贝和替换算法 replace
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

	cout << "替换前: " << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "替换后:" << endl;
	replace(v.begin(), v.end(), 5, 50);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}
