#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>

/*
1.���ͷ�ļ���time.h  stdlib.h
2.������������srand((unsigned int)time(NULL));
3.���������
*/

void print(int num, int arr[]);

int main()
{
	srand((unsigned int)time(NULL));

	/*for (int i = 0; i < 100; i++)
	{
		printf("%d\n", rand() % 100);
	}*/
	int ball[7];
	_Bool flag = false;//���岼�����ͱ���
	//˫ɫ�� ����ԭɫ ���� + ����(6+1) ����1-33 ����1-16 
	//��ɫ�����ظ�������ͺ�������ظ�

	//����
	for (int i = 0; i < 6; i++)
	{
		int temp = rand() % 33 + 1;
		//ȥ��
		for (int j = 0; j < i; j++)
		{
			//�ж��Ƿ��ظ�
			if (ball[j] == temp) {
				flag = true;
				i--;
				break;
			}
		}
		if (!flag)
		{
			ball[i] = temp;
		}
		flag = false;
	}
	//����
	ball[6] = rand() % 33 + 1;

	printf("˫ɫ����Ϊ:");
	print(7,ball);

	return 0;
}

void print(int num,int arr[])
{
	for (int i = 0; i < num; i++)
	{
		printf("%d\n",arr[i]);
	}
}