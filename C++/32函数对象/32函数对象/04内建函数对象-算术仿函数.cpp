#include <iostream>
using namespace std;
#include <functional>


//�ڽ��������� �����º���

//negate һԪ�º��� ȡ���º���
void test01()
{
	negate<int> n;
	cout << n(true) << endl;
}

//plus ��Ԫ�º��� �ӷ�
void test02()
{
	plus<int> p;
	cout << p(10, 20) << endl;

	
}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	return 0;
}