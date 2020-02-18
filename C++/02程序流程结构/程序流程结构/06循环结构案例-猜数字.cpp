#include <iostream>
using namespace std;
#include <ctime>//time系统时间头文件

int main(int argc, char* argv[])
{
	//添加随机数种子 作用:利用当前系统时间生成随机数,防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//1.系统生成随机数
	int num = rand() % 100; // rand()%100 生成1-99
	//2. 玩家进行猜测
	int value = 0;//玩家输入数据
	//3.判断玩家的猜测
	while (true)
	{
		cin >> value;
		if (value > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (value < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜 猜对了" << endl;
			break;
		}
	}
	//猜对	退出游戏
	//猜错	提示猜的结果,过大或者过小,重新返回第二步

	return 0;
}
