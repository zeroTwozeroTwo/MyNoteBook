#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct students
{
	char name[20];
	int age;
	char sex;
	char tel[15];
};
typedef struct students student;

int main01()
{
	//结构体二进制写入
	student stu[5] = {
		{"李白",40,'M',"112"},
		{"李黑",23,'M',"1113"},
		{"李黄",44,'M',"1125"},
		{"李琴",51,'M',"1123"},
		{"李亲",41,'M',"1121"} };

	FILE* fp = fopen("D:\\dest.txt","wb");

	if (!fp)
	{
		return -1;
	}

	for (int i = 0; i < 5; i++)
	{
		fwrite(&stu[i], sizeof(student), 1, fp);
	}

	fclose(fp);

	return 0;
}

int main()
{
	FILE* fp = fopen("D:\\dest.txt", "rb");

	if (!fp)
	{
		return -1;
	}

	student stu[5];
	
	int i = 0;
	while (!feof(fp))
	{
		fread(&stu[i++], sizeof(student), 1, fp);
	}

	fclose(fp);

	for (i = 0; i < 5; i++)
	{
		printf("姓名:%s\t",stu[i].name);
		printf("年龄:%d\t",stu[i].age);
		printf("性别:%s\t", stu[i].sex == 'M' ? "男" : "女");
		printf("电话:%s\t", stu[i].tel);
		printf("\n");
	}

	return 0;
}