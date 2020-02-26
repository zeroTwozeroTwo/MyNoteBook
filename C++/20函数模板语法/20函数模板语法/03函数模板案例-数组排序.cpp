#include <iostream>
using namespace std;


//ʵ��ͨ��	�������������ĺ���
//����	�Ӵ�С
//�㷨	ѡ������
//����	char ����,int ����

//��������ģ��
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<typename T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//�϶����ֵ�±�
		for (int j = i + 1; j < len; j++)
		{
			//�϶������ֵ,�ȱ����������ֵҪС,˵��jС���Ԫ�ز������������ֵ
			if (arr[max] < arr[j])
			{
				max = j;//�������ֵ�±�
			}
		}
		if (max != i)
		{
			//����max��i��Ԫ��
			mySwap(arr[i], arr[max]);
		}
	}
}

//�ṩ��ӡ����ģ��
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
	//����char����
	char charArr[] = "badcfe";//
	int len = sizeof(charArr) / sizeof(char);

	mySort(charArr, len);

	printArray(charArr, len);
}

void test02()
{
	//����int����
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