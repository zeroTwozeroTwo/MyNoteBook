#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//定义结构体格式
/*

struct 结构体名称
{
	结构体成员列表
}

//定义结构体变量

struct 结构体名称 结构体变量名

结构体变量名.结构体成员列表 = 值

如果是字符串类型 需要使用strcpy拷贝

*/



struct student
{
	//成员列表
	char name[20];
	unsigned int age;
	char tel[16];
	float score[3];
	char sex;
}stu = { "尼古拉斯赵四",200,"138888888",100,200,300.5,'M' };

int main()
{
	//第一种赋值方式  按照结构体顺序 
	//struct student stu = { "尼古拉斯赵四",200,"138888888",100,200,300.5,'M' };

	//第二种赋值方式
	/*struct student stu = { .sex = 'M',.name = "刘能",.tel = "13777777"
		,.score[0] = 100 ,.score[1] = 150.5 ,.score[2] = 165.9,
	.age = 48 };*/

	//第三种赋值方式
	//struct student stu;	
	//strcpy(stu.name, "谢广坤");
	//stu.age = 50;
	//strcpy(stu.tel, "1376845");
	//stu.score[0] = 55.55f;
	//stu.score[1] = 294.22f;
	//stu.score[2] = 400.88f;
	//stu.sex = 'M';

	/*struct student stu;
	strcpy(stu.name, "谢广坤");
	stu.age = 50;
	strcpy(stu.tel, "1376845");
	stu.score[0] = 55.55f;
	stu.score[1] = 294.22f;
	stu.score[2] = 400.88f;
	stu.sex = 'M';*/


	printf("姓名:%s\n", stu.name);
	printf("年龄:%d\n", stu.age);
	printf("电话:%s\n", stu.tel);
	printf("成绩:%.1f  %.1f  %.1f\n", stu.score[0], stu.score[1], stu.score[2]);
	printf("性别:%s\n", stu.sex == 'M' ? "男" : "女");


	return 0;
}