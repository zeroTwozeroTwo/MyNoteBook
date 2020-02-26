#include <iostream>
using namespace std;


//实现通用	对数组进行排序的函数
//规则	从大到小
//算法	选择排序
//测试	char 数组,int 数组

//交换函数模板
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<typename T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大值下标
		for (int j = i + 1; j < len; j++)
		{
			//认定的最大值,比遍历出的最大值要小,说明j小标的元素才是真正的最大值
			if (arr[max] < arr[j])
			{
				max = j;//更新最大值下标
			}
		}
		if (max != i)
		{
			//交换max和i的元素
			mySwap(arr[i], arr[max]);
		}
	}
}

//提供打印数组模板
template<typename T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	//测试char数组
	char charArr[] = "badcfe";//
	int len = sizeof(charArr) / sizeof(char);

	mySort(charArr, len);

	printArray(charArr, len);
}

void test02()
{
	//测试int数组
	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
	int len = sizeof(intArr) / sizeof(int);

	mySort(intArr, len);

	printArray(intArr, len);
}


int main(int argc, char* argv[])
{
	//test01();
	test02();



	return 0;
}