#include <iostream>
using namespace std;
#include <string>


//string �ַ���ȡ
void test01()
{
	string str = "hello";

	cout << "str = " << str << endl;

	//1.ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}

	cout << endl;

	//2.ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}

	cout << endl;

	//�޸ĵ����ַ�
	str[0] = 'x';
	//hello xello
	cout << "str = " << str << endl;

	str.at(1) = 'x';
	cout << "str = " << str << endl;
}

int main(int argc, char* argv[])
{
	test01();


	return 0;
}