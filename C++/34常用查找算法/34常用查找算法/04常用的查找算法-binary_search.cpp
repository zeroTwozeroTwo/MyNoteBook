#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

//���ò����㷨 binary_search
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����������Ƿ���9Ԫ��
	//ע��:������������������� �������������,���δ֪
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "�ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
}


int main(int argc, char* argv[])
{

	test01();


	return 0;
}