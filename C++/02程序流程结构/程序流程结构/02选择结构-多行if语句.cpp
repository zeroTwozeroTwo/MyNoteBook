#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//ѡ��ṹ - ����if���
	//���뿼�Է���,�����������600,��Ϊ����һ����ѧ,����Ļ�����
	//1.���뿼�Է���
	int score = 0;
	cout << "������һ�����Է���:" << endl;
	cin >> score;
	//2.��ʾ�û�����ķ���
	cout << "������ķ���Ϊ:" << score << endl;
	//3.�ж�,�������600,��ӡ���ϵ�һ��	,�����ӡδ����һ��
	if (score > 600)
	{
		cout << "��ϲ ������һ����ѧ" << endl;
	}
	else
	{
		cout << "δ����һ����ѧ" << endl;
	}
	return 0;
}
