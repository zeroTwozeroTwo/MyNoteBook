#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{

	//1.创建二维数组
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	int row = sizeof(scores) / sizeof(scores[0]);
	int col = sizeof(scores[0]) / sizeof(scores[0][0]);
	for (int i = 0; i < row; i++)
	{
		int sum = 0;
		for (int j = 0; j < col; j++)
		{
			sum += scores[i][j];
			cout << scores[i][j] << "  ";
		}
		cout << "总成绩为:" << sum << endl;
		cout << endl;
	}
	return 0;
}
