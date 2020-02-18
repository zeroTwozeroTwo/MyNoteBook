#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//敲桌子案例
	//1.输出1-100数字
	//2.从100中找到特殊数字,打印敲桌子
	//如果是7的倍数,个位有7,或者十位有7,打印敲桌子
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i / 10 == 7 || i % 7 == 0)//特殊数字打印敲桌子
		{
			cout << "敲桌子" << endl;
		}
		else//不是特殊数字,才打印数字
		{
			cout << i << endl;
		}
	}
	return 0;
}
