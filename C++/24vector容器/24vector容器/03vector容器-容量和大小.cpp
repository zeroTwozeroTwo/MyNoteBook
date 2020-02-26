#include <iostream>
using namespace std;
#include <vector>

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector�����������ʹ�С����
void test01()
{
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printVector(v1);

	if (v1.empty())//Ϊ���������Ϊ��
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "v1������Ϊ:" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ:" << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15, 100);//�������ذ汾,����ָ��Ĭ�����ֵ,����2
	printVector(v1);//�������ָ���ı�ԭ������,Ĭ����0����µ�λ��

	v1.resize(5);
	
	printVector(v1);//�������ָ���ı�ԭ������,�������ֻ�ɾ����
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}