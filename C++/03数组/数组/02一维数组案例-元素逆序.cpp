#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	int arr[5] = { 1,2,3,4,5 };//原始数组
	cout << "数组逆序前:" << endl;
	int start = 0;//开始下标
	int end = sizeof(arr) / sizeof(int);//结束下标
	for (int i = 0; i < end; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//开始下标小于结束下标就开始交换顺序
	while (start++ < end--)
	{
		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}
	cout << "数组逆序后:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}
