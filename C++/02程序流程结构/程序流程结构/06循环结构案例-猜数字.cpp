#include <iostream>
using namespace std;
#include <ctime>//timeϵͳʱ��ͷ�ļ�

int main(int argc, char* argv[])
{
	//������������ ����:���õ�ǰϵͳʱ�����������,��ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//1.ϵͳ���������
	int num = rand() % 100; // rand()%100 ����1-99
	//2. ��ҽ��в²�
	int value = 0;//�����������
	//3.�ж���ҵĲ²�
	while (true)
	{
		cin >> value;
		if (value > num)
		{
			cout << "�²����" << endl;
		}
		else if (value < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ �¶���" << endl;
			break;
		}
	}
	//�¶�	�˳���Ϸ
	//�´�	��ʾ�µĽ��,������߹�С,���·��صڶ���

	return 0;
}
