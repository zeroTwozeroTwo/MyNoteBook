#include <iostream>
using namespace std;
#include <vector>
#include <functional>
#include <algorithm>
#include <cstdlib>
#include <ctime>

//常用排序算法 random_shuffle
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	srand((unsigned int)time(NULL));
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//利用洗牌 算法 打乱顺序
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
}

int main(int argc, char* argv[])
{
	test01();



	return 0;
}