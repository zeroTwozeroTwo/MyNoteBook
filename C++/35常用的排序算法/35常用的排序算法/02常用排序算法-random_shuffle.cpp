#include <iostream>
using namespace std;
#include <vector>
#include <functional>
#include <algorithm>
#include <cstdlib>
#include <ctime>

//���������㷨 random_shuffle
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
	//����ϴ�� �㷨 ����˳��
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
}

int main(int argc, char* argv[])
{
	test01();



	return 0;
}