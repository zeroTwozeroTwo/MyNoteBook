#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students
{
	char* name;
	float* score;
};

int main()
{
	struct students* p = (struct student*)malloc(sizeof(struct students) * 3);

	for (int i = 0; i < 3; i++)
	{
		p[i].name = (char*)malloc(sizeof(char) * 21);
		p[i].score = (float*)malloc(sizeof(float) * 3);
		printf("����������\t�ɼ�\t�ɼ�\t�ɼ�\t\n");
		scanf("%s%f%f%f", p[i].name, &p[i].score[0], &p[i].score[1], &p[i].score[2]);
	}
	
	//ð������
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			float sum1 = p[j].score[0] + p[j].score[1] + p[j].score[2];
			float sum2 = p[j + 1].score[0] + p[j + 1].score[1] + p[j + 1].score[2];
			if (sum1 > sum2)
			{
				struct students temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

	//��ӡ
	for (int i = 0; i < 3; i++)
	{
		printf("����:%s\n", p[i].name);
		printf("�ɼ�:%.1f  %.1f  %.1f\n", p[i].score[0], p[i].score[1], p[i].score[2]);
	}


	//�ͷ�
	for (int i = 0; i < 3; i++)
	{
		free(p[i].name);
		free(p[i].score);
	}

	free(p);

	return 0;
}

