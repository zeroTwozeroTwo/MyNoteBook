#include <iostream>
using namespace std;
#include <fstream> // ͷ�ļ�����

//�ı��ļ� д�ļ�

void test01()
{
	//1.����ͷ�ļ� fstream
	
	//2.���������� OutPutStream
	ofstream ofstream;

	//3.ָ���򿪷�ʽ
	ofstream.open("test.txt", ios::out);

	//4.д����
	ofstream << "����:����" << endl;
	ofstream << "�Ա�:��" << endl;
	ofstream << "����:18" << endl;

	//5.�ر��ļ�
	ofstream.close();
}

int main(int argc, char* argv[])
{

	test01();


	return 0;
}