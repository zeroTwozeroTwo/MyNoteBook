#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


//���ÿ������滻�㷨 replace
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

	cout << "�滻ǰ: " << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "�滻��:" << endl;
	replace(v.begin(), v.end(), 5, 50);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}
