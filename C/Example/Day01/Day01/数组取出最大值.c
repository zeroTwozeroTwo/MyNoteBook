#include<stdio.h>

int main()
{
	//��������
	int arrays[10];

	//���鳤��
	int len = sizeof(arrays) / sizeof(arrays[0]);

	//ѭ������
	for (int i = 0; i < len; i++)
	{
		scanf_s("%d",&arrays[i]);
	}
	int max = 0;
	for (int i = 0; i < len; i++)
	{
		if (max < arrays[i])
		{
			max = arrays[i];
		}
	}

	printf("���ֵΪ:%d",max);

	return 0;
}