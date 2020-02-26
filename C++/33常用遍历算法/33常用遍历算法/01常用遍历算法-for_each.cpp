#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//常用遍历算法 for_each
//普通函数
void print01(int val)
{
	cout << val << " ";
}

class Print02
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

	//for_each(v.begin(), v.end(), print01);
	for_each(v.begin(), v.end(), Print02());
}

int main(int argc, char* argv[])
{
	test01();

	return 0;
}
