#include<stdio.h>

void print(int arrays[], int len);


//ѡ������
int main()
{
	//��������
	int arrays[3] = { 0 };
	//���鳤��
	int len = sizeof(arrays) / sizeof(arrays[0]);
	//ѭ������
	for (int i = 0; i < len; i++)
	{
		scanf_s("%d", &arrays[i]);
	}

	for (int i = 0; i < len - 1; i++)//��ѭ��������һ���Ƚ��˶��ٴ�
	{
		for (int j = i + 1; j < len; j++)//��ѭ����ÿ�αȽ϶��ٸ�Ԫ��
		{
			if (arrays[i] > arrays[j])
			{
				int temp = arrays[i];
				arrays[i] = arrays[j];
				arrays[j] = temp;
			}
		}
	}
	printf("=====================\n");
	print(arrays, len);
	return 0;
}

//��������
void print(int arrays[],int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arrays[i]);
	}
}