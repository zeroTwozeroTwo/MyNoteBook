#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//����ṹ���ʽ
/*

struct �ṹ������
{
	�ṹ���Ա�б�
}

//����ṹ�����

struct �ṹ������ �ṹ�������

�ṹ�������.�ṹ���Ա�б� = ֵ

������ַ������� ��Ҫʹ��strcpy����

*/



struct student
{
	//��Ա�б�
	char name[20];
	unsigned int age;
	char tel[16];
	float score[3];
	char sex;
}stu = { "�����˹����",200,"138888888",100,200,300.5,'M' };

int main()
{
	//��һ�ָ�ֵ��ʽ  ���սṹ��˳�� 
	//struct student stu = { "�����˹����",200,"138888888",100,200,300.5,'M' };

	//�ڶ��ָ�ֵ��ʽ
	/*struct student stu = { .sex = 'M',.name = "����",.tel = "13777777"
		,.score[0] = 100 ,.score[1] = 150.5 ,.score[2] = 165.9,
	.age = 48 };*/

	//�����ָ�ֵ��ʽ
	//struct student stu;	
	//strcpy(stu.name, "л����");
	//stu.age = 50;
	//strcpy(stu.tel, "1376845");
	//stu.score[0] = 55.55f;
	//stu.score[1] = 294.22f;
	//stu.score[2] = 400.88f;
	//stu.sex = 'M';

	/*struct student stu;
	strcpy(stu.name, "л����");
	stu.age = 50;
	strcpy(stu.tel, "1376845");
	stu.score[0] = 55.55f;
	stu.score[1] = 294.22f;
	stu.score[2] = 400.88f;
	stu.sex = 'M';*/


	printf("����:%s\n", stu.name);
	printf("����:%d\n", stu.age);
	printf("�绰:%s\n", stu.tel);
	printf("�ɼ�:%.1f  %.1f  %.1f\n", stu.score[0], stu.score[1], stu.score[2]);
	printf("�Ա�:%s\n", stu.sex == 'M' ? "��" : "Ů");


	return 0;
}