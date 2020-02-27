#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

//���ÿ������滻 replace_if
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class GreaterThree
{
public:
	bool operator()(int val)
	{
		return val >= 3;
	}
};

void test01()
{
	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����ڵ���30 �滻Ϊ3000;
	cout << "�滻ǰ:" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
	
	cout << "�滻��:" << endl;
	replace_if(v.begin(), v.end(), GreaterThree(), 3000);
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;



}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}