#include <iostream>
using namespace std;
#include "speechManager.h"
#include <cstdlib>
#include <ctime>


int main(int argc, char* argv[])
{
	//���������
	srand((unsigned int)time(NULL));

	//�����������
	SpeechManager sm;
	int choice = 0;//���ڱ����û�����

	//����12��ѡ�ִ���
	//for(map<int,Speaker>::iterator it = sm.m_Speaker.begin();it != sm.m_Speaker.end();it++)
	//{
	//	cout << "ѡ�ֱ��:" << it->first << "����:" << it->second.m_Name << "����:"
	//		<< it->second.m_Score[0] << endl;
	//}

	while (true)
	{
		sm.show_Menu();
		cout << "����������ѡ��:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴���������¼
			sm.showRecord();
			break;
		case 3://��ձ�����¼
			break;
		case 0://�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			cout << "��������!!!" << endl;
			//��ͣ����
			system("pause");
			system("cls");
			break;

		}
	}



	return 0;
}
