#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//�����Ӱ���
	//1.���1-100����
	//2.��100���ҵ���������,��ӡ������
	//�����7�ı���,��λ��7,����ʮλ��7,��ӡ������
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i / 10 == 7 || i % 7 == 0)//�������ִ�ӡ������
		{
			cout << "������" << endl;
		}
		else//������������,�Ŵ�ӡ����
		{
			cout << i << endl;
		}
	}
	return 0;
}
