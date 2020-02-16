#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students
{
	char name[20];//20
	unsigned int age;//4
	char tel[15];//15
	char sex;//1
	float score[3];//12
};


int main()
{
	struct students stu[1];
	
	for (int i = 0; i < 1; i++)
	{
		scanf("%s%d%s%f%f%f%c", stu[i].name, &stu[i].age, stu[i].tel,
			 &stu[i].score[0], &stu[i].score[1], &stu[i].score[2], &stu[i].sex);
		/*scanf("%f%f%f", &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);*/
	}

	for (int i = 0; i < 1; i++)
	{
	/*	printf("姓名:%s\n", stu[i].name);
		printf("年龄:%d\n", stu[i].age);
		printf("电话:%s\n", stu[i].tel);*/
		printf("成绩:%.1f  %.1f  %.1f\n", stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	/*	printf("性别:%s\n", stu[i].sex == 'M' ? "男" : "女");*/
		printf("=======================\n");
	}

	return 0;
}
