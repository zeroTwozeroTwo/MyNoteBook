#include <iostream>
using namespace std;

//����������
//�ȽϺ���,ʵ�������������ֽ��бȽ�,���ؽϴ��ֵ

//��ǰ���߱����������Ĵ���,�������ú�������
//��������д���,���Ƕ���ֻ����һ��
int max(int a, int b);

int main(int argc, char* argv[])
{
	int a = 10;
	int b = 10;
	cout << max(a, b) << endl;
	
	return 0;
}

int max(int a,int b)
{
	return a > b ? a : b;
}