#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//常用查找算法 binary_search
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中是否有9元素
	//注意:容器必须是有序的序列 如果是无限序列,结果未知
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "找到了元素" << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
}


int main(int argc, char* argv[])
{

	test01();


	return 0;
}