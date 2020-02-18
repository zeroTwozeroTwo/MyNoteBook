#include <iostream>
using namespace std;
/*
 * 排序的总轮数 = 元素个数 - 1;
 * 每轮对比次数 = 元素个数 - 排序轮数 - 1;
 */

int main(int argc, char* argv[])
{
	//利用冒泡排序实现升序排列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int len = sizeof(arr) / sizeof(int);//数组长度
	cout << "排序前:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}

	//冒泡排序
	bool flag = true;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//第一个数字比第二个数字大,交换两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				flag = false;
			}
		}
		if (flag)
		{
			break;
		}
		flag = true;
	}
	cout << "排序后:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}
