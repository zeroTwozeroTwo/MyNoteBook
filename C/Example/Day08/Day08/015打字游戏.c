#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>


void tips()
{
	printf("=============������Ϸ=============\n");
	printf("===========�����������===========\n");
	printf("==========��Esc �˳���Ϸ==========\n");

	char ch = _getch();
	if (ch == 27)
	{
		exit(0);
	}
}

void rand_ch(char* arr)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 50; i++)
	{
		arr[i] = rand() % 26 + 'a';
	}
}

void print_ch(char* arr)
{
	//���� ��ʱ�� ��ʼ ����  ������
	unsigned int start_time;
	unsigned int end_time;
	int value = 0;
	for (int i = 0; i < 50; i++)
	{
		char ch = _getch();
		if (i == 0)
		{
			start_time = time(NULL);
		}
		if (ch == arr[i])
		{
			printf("%c", ch);
			value++;
		}
		else
		{
			printf("-");
		}
	}
	end_time = time(NULL);

	printf("\n��ʱ:%d��\n", end_time - start_time);
	printf("��ȷ��:%.1f%%\n", value * 1.0 / 50 * 100);
}

int main()
{
	//�ֿ� 
	char arr[51];
	memset(arr, 0, 51);


	//1.��ʾ����
	tips();
	//2.����ַ�
	rand_ch(arr);
	printf("%s\n", arr);
	//3.�����ַ�
	print_ch(arr);

	system("pause");

	return 0;
}