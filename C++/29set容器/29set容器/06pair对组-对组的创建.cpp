#include <iostream>
using namespace std;
#include <set>

//pair����Ĵ���
void test01()
{
	//��һ�ַ�ʽ
	pair<string, int> p("Tom", 20);

	cout << "����:" << p.first << "\t����:" << p.second << endl;

	//�ڶ��ַ�ʽ
	pair<string, int> p2 = make_pair("Jerry", 30);
	
	cout << "����:" << p2.first << "\t����:" << p2.second << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}