#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	//1.����5ֻС����������
	int arr[5] = { 300,350,200,400,250 };
	//2.���������ҵ����ֵ
	int max = arr[0];//���϶�һ�����ֵ
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
