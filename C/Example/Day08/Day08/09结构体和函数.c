#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct info
{
	char name[21];
	char age;
};

//值传递
void function(struct info s)
{
	strcpy(s.name, "李四");
	s.age = 20;

	printf("%s   %d\n", s.name, s.age);

}
//地址传递
void function02(struct info* s)
{
	strcpy(s->name, "李四");
	s->age = 18;
}

//返回值为结构体
struct info function03()
{
	struct info s;
	strcpy(s.name, "李四");
	s.age = 30;

	return s;
}

//返回值为结构体指针
struct info* function04()
{
	struct info s;
	strcpy(s.name, "李四");
	s.age = 30;

	return &s;
}


int main()
{
	//struct info in = { "张三",18 };

	//function02(&in);
	//printf("in:%s   %d\n", in.name, in.age);

	struct info* in2 = function04();

	//printf("in2:%s   %d\n", in2.name, in2.age);

	printf("%s    %d",in2->name,in2->age);

	return 0;


}