#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct info
{
	char name[21];
	char age;
};

//ֵ����
void function(struct info s)
{
	strcpy(s.name, "����");
	s.age = 20;

	printf("%s   %d\n", s.name, s.age);

}
//��ַ����
void function02(struct info* s)
{
	strcpy(s->name, "����");
	s->age = 18;
}

//����ֵΪ�ṹ��
struct info function03()
{
	struct info s;
	strcpy(s.name, "����");
	s.age = 30;

	return s;
}

//����ֵΪ�ṹ��ָ��
struct info* function04()
{
	struct info s;
	strcpy(s.name, "����");
	s.age = 30;

	return &s;
}


int main()
{
	//struct info in = { "����",18 };

	//function02(&in);
	//printf("in:%s   %d\n", in.name, in.age);

	struct info* in2 = function04();

	//printf("in2:%s   %d\n", in2.name, in2.age);

	printf("%s    %d",in2->name,in2->age);

	return 0;


}