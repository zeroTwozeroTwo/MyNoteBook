#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//switch语句
	//给电影进行打分
	//10~9 经典
	//8 - 7 非常好
	//6 - 5 一般
	//5 以下 烂片

	//1. 提示用户给电影评分
	cout << "请给电影进行评分" << endl;
	//2.用户开始进行打分
	int score = 0;
	cin >> score;
	//3.根据用户输入的分数来提示用户最后的结果
	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
	case 7:
		cout << "非常好" << endl;
		break;//退出当前分支
	case 6:
	case 5:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
	}
	return 0;
}
