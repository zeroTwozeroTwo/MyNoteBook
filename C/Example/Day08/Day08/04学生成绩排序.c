#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct students
{
	char name[20];//20
	float score[3];//12
};


int main()
{
	struct students stu[3];

	for (int i = 0; i < 3; i++)
	{
		printf("����������\t�ɼ�\t�ɼ�\t�ɼ�\t\n");
		scanf("%s%f%f%f",stu[i].name,&stu[i].score[0],
			&stu[i].score[1], &stu[i].score[2]);
	}

	//ð������
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			float sum1 = stu[j].score[0] + stu[j].score[1] + stu[j].score[2];
			float sum2 = stu[j + 1].score[0] + stu[j + 1].score[1] + stu[j + 1].score[2];
			if (sum1 > sum2)
			{
				//��һ�ַ�ʽ
				////�ṹ�彻�� �������г�Ա�б��е�����
				////��������
				//char temp[20] = { 0 };
				//strcpy(temp, stu[j].name);
				//strcpy(stu[j].name, stu[j + 1].name);
				//strcpy(stu[j + 1].name, temp);
				////�����ɼ�
				//for (int k = 0; k < 3; k++)
				//{
				//	float temp2 = stu[j].score[k];
				//	stu[j].score[k] = stu[j + 1].score[k];
				//	stu[j + 1].score[k] = temp2;
				//}
				

				//�ڶ��ַ�ʽ
				struct students temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		printf("����:%s\n", stu[i].name);
		printf("�ɼ�:%.1f  %.1f  %.1f\n", stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}


	return 0;
}