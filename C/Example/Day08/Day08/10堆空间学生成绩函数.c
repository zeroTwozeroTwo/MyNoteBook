#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students
{
	char* name;
	float* score;
};


void sort(struct students* stu, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			float sum1 = stu[j].score[0] + stu[j].score[1] + stu[j].score[2];
			float sum2 = stu[j + 1].score[0] + stu[j + 1].score[1] + stu[j + 1].score[2];
			if (sum1 > sum2)
			{
				struct students temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}

void printArray(struct students* p,int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("姓名:%s\n", p[i].name);
		printf("成绩:%.1f  %.1f  %.1f\n", p[i].score[0], p[i].score[1], p[i].score[2]);
	}
}

void freeClose(struct students* p,int len)
{
	for (int i = 0; i < len; i++)
	{
		free(p[i].name);
		free(p[i].score);
	}
	free(p);
}

int main()
{
	struct students* p = (struct student*)malloc(sizeof(struct students) * 3);

	for (int i = 0; i < 3; i++)
	{
		p[i].name = (char*)malloc(sizeof(char) * 21);
		p[i].score = (float*)malloc(sizeof(float) * 3);
		printf("请输入姓名\t成绩\t成绩\t成绩\t\n");
		scanf("%s%f%f%f", p[i].name, &p[i].score[0], &p[i].score[1], &p[i].score[2]);
	}

	sort(p,3);

	printArray(p, 3);

	freeClose(p,3);

	return 0;
}
