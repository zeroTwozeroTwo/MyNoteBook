#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//ѡ��ṹ ����if���
	//�û��������,�����������600,��Ϊ����һ����ѧ,����Ļ�����
	//1.�û��������
	int score = 0;
	cout << "������һ������:" << endl;
	cin >> score;
	//2.��ӡ�û�����ķ���
	cout << "������ķ���Ϊ:" << score << endl;
	//3.�жϷ����Ƿ����600,�������,��ô���
	if (score > 600)
	{
		cout << "��ϲ��������һ����ѧ" << endl;
	}
	return 0;
}
