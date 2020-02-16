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
		printf("请输入姓名\t成绩\t成绩\t成绩\t\n");
		scanf("%s%f%f%f",stu[i].name,&stu[i].score[0],
			&stu[i].score[1], &stu[i].score[2]);
	}

	//冒泡排序
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			float sum1 = stu[j].score[0] + stu[j].score[1] + stu[j].score[2];
			float sum2 = stu[j + 1].score[0] + stu[j + 1].score[1] + stu[j + 1].score[2];
			if (sum1 > sum2)
			{
				//第一种方式
				////结构体交换 交换所有成员列表中的数据
				////交换姓名
				//char temp[20] = { 0 };
				//strcpy(temp, stu[j].name);
				//strcpy(stu[j].name, stu[j + 1].name);
				//strcpy(stu[j + 1].name, temp);
				////交换成绩
				//for (int k = 0; k < 3; k++)
				//{
				//	float temp2 = stu[j].score[k];
				//	stu[j].score[k] = stu[j + 1].score[k];
				//	stu[j + 1].score[k] = temp2;
				//}
				

				//第二种方式
				struct students temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		printf("姓名:%s\n", stu[i].name);
		printf("成绩:%.1f  %.1f  %.1f\n", stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}


	return 0;
}