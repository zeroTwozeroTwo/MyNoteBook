#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void printGrade();

int main() {
	printGrade();
}
//�ɼ�����
void printGrade() {
	printf("������ɼ�:");//��ʾ
	int grade = 0;
	scanf("%d", &grade);//����

	int grade2 = grade / 10;
	switch (grade2)//�����ж����
	{
	case 10:
	case 9:
		printf("����");
		break;
	case 8:
		printf("����");
		break;
	case 7:
	case 6:
		printf("����");
	default:
		printf("������");
		break;
	}
}