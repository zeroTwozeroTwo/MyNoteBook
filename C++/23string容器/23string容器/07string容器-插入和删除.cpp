#include <iostream>
using namespace std;
#include <string>

//�ַ��� �����ɾ��
void test01()
{
	string str = "hello";

	//����
	str.insert(1, "111");

	//hello h111elo
	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << "str = " << str << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}