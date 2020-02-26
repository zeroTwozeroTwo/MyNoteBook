#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

//���ñ����㷨 transform
class Transform
{
public:

	int operator()(int v)
	{
		return v + 100;
	}
};

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
	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int> vTarger;//Ŀ������

	vTarger.resize(v.size());//Ŀ������ ��Ҫ��ǰ���ٿռ�
	transform(v.begin(), v.end(), vTarger.begin(), Transform());

	for_each(vTarger.begin(), vTarger.end(), MyPrint());
	cout << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}