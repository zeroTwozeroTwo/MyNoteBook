#include<stdio.h>

void print(int array[],int len);

int main()
{
	//��������
	int arrays[10] = { 0 };
	//���鳤��
	int len = sizeof(arrays) / sizeof(arrays[0]);

	//ѭ������
	for (int i = 0; i < len; i++)
	{
		scanf_s("%d", &arrays[i]);
	}

	//��ӡ
	//print(arrays, len);
	printf("=======================\n");

	//ð������
	for (int i = 0; i < len - 1; i++)//�����������ִ�
	{
		for (int j = 0; j < len - i - 1;j++)//�ڲ������Ĵ���
		{
			if (arrays[j] > arrays[j + 1])
			{
				int temp = arrays[j];
				arrays[j] = arrays[j + 1];
				arrays[j + 1] = temp;
			}
		}
	}

	//��ӡ
	print(arrays, len);

	return 0;
}
//���ݵ����׵�ַ,
void print(int arrays[],int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n",arrays[i]);
	}
}