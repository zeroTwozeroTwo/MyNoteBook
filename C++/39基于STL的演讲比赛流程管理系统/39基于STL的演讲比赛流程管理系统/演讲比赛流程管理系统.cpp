#include <iostream>
using namespace std;
#include "speechManager.h"
#include <cstdlib>
#include <ctime>


int main(int argc, char* argv[])
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//创建管理对象
	SpeechManager sm;
	int choice = 0;//用于保存用户输入

	//测试12名选手创建
	//for(map<int,Speaker>::iterator it = sm.m_Speaker.begin();it != sm.m_Speaker.end();it++)
	//{
	//	cout << "选手编号:" << it->first << "姓名:" << it->second.m_Name << "分数:"
	//		<< it->second.m_Score[0] << endl;
	//}

	while (true)
	{
		sm.show_Menu();
		cout << "请输入您的选择:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届比赛记录
			sm.showRecord();
			break;
		case 3://清空比赛记录
			break;
		case 0://退出系统
			sm.exitSystem();
			break;
		default:
			cout << "输入有误!!!" << endl;
			//暂停清屏
			system("pause");
			system("cls");
			break;

		}
	}



	return 0;
}
