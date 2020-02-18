#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//1.创建5只小猪体重数组
	int arr[5] = { 300,350,200,400,250 };
	//2.从数组中找到最大值
	int max = arr[0];//先认定一个最大值
	int len = sizeof(arr) / sizeof(int);
	for (int i = 1; i < len; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "max = " << max << endl;
	return 0;
}
