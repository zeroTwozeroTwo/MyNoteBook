#include<stdio.h>


int main()
{

	int scores[3][3];
	
	int line = sizeof(scores) / sizeof(scores[0]);//�еĳ���
	printf("�еĳ���Ϊ:%d\n",line);
	int len = sizeof(scores[0])/sizeof(scores[0][0]);//�еĳ���
	printf("�еĳ���Ϊ:%d\n",len);


	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < len; j++)
		{
			printf("�������%dѧ����%d�ųɼ�:", i + 1, j + 1);
			scanf_s("%d", &scores[i][j]);
		}
	}

	int sum = 0;

	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < len; j++)
		{
			sum += scores[i][j];
		}
		printf("��%d��ѧ�����ܳɼ�Ϊ:%d\n", i + 1, sum);
		printf("��%d��ѧ����ƽ���ɼ�Ϊ:%d\n", i + 1, sum / len);
		sum = 0;
	}

	return 0;
}