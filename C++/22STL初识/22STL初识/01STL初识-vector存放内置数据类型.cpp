#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>	//��׼�㷨ͷ�ļ�

//vector�������������������

void myPrint(int val)
{
	cout << val << endl;
}


void test01()
{
	//������һ��vector����,����
	vector<int> v;

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	//ͨ�����������������е�����
	//vector<int>::iterator itBegin = v.begin();//��ʼ������,ָ�������е�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ��Ԫ�ص���һ��Ԫ��

	////��һ�ֱ�����ʽ
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	////�ڶ��ֱ�����ʽ
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//�����ֱ�����ʽ	����STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}