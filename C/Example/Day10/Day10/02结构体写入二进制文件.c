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
	//�ṹ�������д��
	student stu[5] = {
		{"���",40,'M',"112"},
		{"���",23,'M',"1113"},
		{"���",44,'M',"1125"},
		{"����",51,'M',"1123"},
		{"����",41,'M',"1121"} };

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
		printf("����:%s\t",stu[i].name);
		printf("����:%d\t",stu[i].age);
		printf("�Ա�:%s\t", stu[i].sex == 'M' ? "��" : "Ů");
		printf("�绰:%s\t", stu[i].tel);
		printf("\n");
	}

	return 0;
}