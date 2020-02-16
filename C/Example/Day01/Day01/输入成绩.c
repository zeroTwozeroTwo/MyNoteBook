#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void printGrade();

int main() {
	printGrade();
}
//成绩评估
void printGrade() {
	printf("请输入成绩:");//提示
	int grade = 0;
	scanf("%d", &grade);//输入

	int grade2 = grade / 10;
	switch (grade2)//进行判断输出
	{
	case 10:
	case 9:
		printf("优秀");
		break;
	case 8:
		printf("良好");
		break;
	case 7:
	case 6:
		printf("及格");
	default:
		printf("不及格");
		break;
	}
}