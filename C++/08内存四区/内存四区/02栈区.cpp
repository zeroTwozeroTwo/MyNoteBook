#include <iostream>
using namespace std;

//ջ�����ݵ�ע������ --- ��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�
int* function(int b)//�β�����Ҳ�����ջ��
{
	b = 100;
	int a = 10;//�ֲ����� �����ջ��,ջ���������ں���ִ����ɺ��Զ��ͷ�
	return &a;//���ؾֲ�������ַ
}

int main(int argc, char* argv[])
{
	int* p = function();//����function�������صĵ�ַ
	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ������,����Ϊ���������˱���
	cout << *p << endl;//�ڶ���������ݾͲ��ڱ�����
	return 0;
}
