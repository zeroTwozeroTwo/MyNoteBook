#include<stdio.h>


int main()
{
	//��������
	int arrays[5] = { 1,2,3,4,5 };
	
	//����ʵ�ʳ��ȡ����㿪ʼ
	int len = sizeof(arrays) / sizeof(arrays[0]);
	int j = 1;

	//����
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arrays[i]);
	}
	printf("\n");
	//��������
	for (int i = 0; i <= len / 2; i++)
	{
		int temp = arrays[i];
		arrays[i] = arrays[len - j];
		arrays[len - j] = temp;
		j++;
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d\t",arrays[i]);
	}

	return 0;
}