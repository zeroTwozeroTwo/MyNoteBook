#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	int arr[5] = { 1,2,3,4,5 };//ԭʼ����
	cout << "��������ǰ:" << endl;
	int start = 0;//��ʼ�±�
	int end = sizeof(arr) / sizeof(int);//�����±�
	for (int i = 0; i < end; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//��ʼ�±�С�ڽ����±�Ϳ�ʼ����˳��
	while (start++ < end--)
	{
		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}
	cout << "���������:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}
