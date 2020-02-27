#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

//常用拷贝和替换算法 swap
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};


void test01()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "互换前: " << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;

	cout << "互换后:" << endl;
	v1.swap(v2);
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;

}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}