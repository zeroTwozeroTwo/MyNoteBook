#include <iostream>
using namespace std;

//new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	//new ���ص��� ���������͵�ָ��
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	//���������� �ɳ���Ա������,����Ա�����ͷ�
	//������ͷŶ�������,���ùؼ���delete
	delete p;//�ڴ��Ѿ����ͷ�,�ٴη��ʾ��ǷǷ�����,�ᱨ��

	//cout << *p << endl;

}

//2. �ڶ�������new��������
void test02()
{
	//����10���������ݵ�����,�ڶ���
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷŶ�������
	//�ͷ������ʱ�� Ҫ��[]�ſ���
	delete[] arr;
	
}

int main(int argc, char* argv[])
{
	//1.new�Ļ����﷨
	test01();
	//2.�ڶ�������new��������
	test02();
	return 0;
}
