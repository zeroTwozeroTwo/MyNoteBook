#include <iostream>
using namespace std;
/*
 * ����������� = Ԫ�ظ��� - 1;
 * ÿ�ֶԱȴ��� = Ԫ�ظ��� - �������� - 1;
 */

int main(int argc, char* argv[])
{
	//����ð������ʵ����������
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int len = sizeof(arr) / sizeof(int);//���鳤��
	cout << "����ǰ:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}

	//ð������
	bool flag = true;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//��һ�����ֱȵڶ������ִ�,������������
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
	cout << "�����:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}
