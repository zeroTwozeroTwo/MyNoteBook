#include <iostream>
using namespace std;

//������Ĭ�ϲ���
//��������Լ�����������,�����Լ�������,���û��,��ô����Ĭ��ֵ
//�﷨: ����ֵ���� ������(�β� = Ĭ��ֵ){}
int func(int a,int b = 20,int c = 30)
{
	return a + b + c;
}


//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ���,��ô�����λ������,�����Ҷ�������Ĭ��ֵ
//2.�������������Ĭ�ϲ���,����ʵ�־Ͳ�����Ĭ�ϲ���
//		������ʵ��ֻ����һ����Ĭ�ϲ���
int fun2(int a = 10, int b = 10);

int fun2(int a, int b)
{
	return a + b;
}

int main(int argc,char* argv[])
{

	//cout << func(10,30) << endl;

	cout << fun2() << endl;
	return 0;
}
