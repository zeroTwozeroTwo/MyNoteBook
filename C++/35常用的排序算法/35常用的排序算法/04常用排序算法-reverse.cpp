#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

//���������㷨 reverse
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

	cout << "��תǰ:" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "��ת��:" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;




}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}