#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//switch���
	//����Ӱ���д��
	//10~9 ����
	//8 - 7 �ǳ���
	//6 - 5 һ��
	//5 ���� ��Ƭ

	//1. ��ʾ�û�����Ӱ����
	cout << "�����Ӱ��������" << endl;
	//2.�û���ʼ���д��
	int score = 0;
	cin >> score;
	//3.�����û�����ķ�������ʾ�û����Ľ��
	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
	case 7:
		cout << "�ǳ���" << endl;
		break;//�˳���ǰ��֧
	case 6:
	case 5:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
	}
	return 0;
}
