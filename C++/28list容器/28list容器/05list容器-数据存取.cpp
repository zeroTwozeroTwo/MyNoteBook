#include <iostream>
using namespace std;
#include <list>


//list���� ���ݴ�ȡ
void test01()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//l1[0] ������ʹ��[]����list�����е�Ԫ��

	//l1.at(0) ������ʹ��at��ʽ����list�����е�Ԫ��

	//ԭ����list����������,�����������Կռ�洢����,������Ҳ�ǲ�֧��������ʵ�
	

	cout << "list������һ��Ԫ��:" << l1.front() << endl;
	cout << "list�������һ��Ԫ��:" << l1.back() << endl;


	//��֤�������ǲ�֧��������ʵ�
	list<int>::iterator it = l1.begin();

	//it = it + 1;��֧���������
	it++;//֧��˫��
}

int main(int argc, char* argv[])
{
	test01();



	return 0;
}