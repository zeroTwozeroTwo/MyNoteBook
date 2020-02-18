#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//打印星图
	//endl 代表换行
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	return 0;
}
