#include <iostream>
using namespace std;
#include <string>

//string���Ӵ�

void test01()
{
	string str = "abcdef";

	//�Ӽ���ʼ�ؼ���
	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

//ʵ�ò���
void test02()
{
	string email = "zhangsan@sina.com";

	//���ʼ���ַ�� ��ȡ �û�����Ϣ
	string user = email.substr(0, email.find("@"));

	cout << "user = " << user << endl;

}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	return 0;
}