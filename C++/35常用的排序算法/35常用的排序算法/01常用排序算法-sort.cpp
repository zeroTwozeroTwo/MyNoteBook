#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <functional>

//���������㷨 sort
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(6);
	v.push_back(1);

	//����sort��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	//�ı�Ϊ ����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}



int main(int argc, char* argv[])
{
	test01();


	return 0;
}
