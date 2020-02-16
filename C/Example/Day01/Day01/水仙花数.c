#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int number = 0;
	printf("请输入数:");
	scanf("%d",&number);

	int number2 = number;

	int sum = 0;

	int s = 0;
	while (number2>0) {
		s = number2 % 10;
		//printf("s:%d\n",s);
		number2 = number2 / 10;
		sum += s * s * s;
		//printf("sum:%d\n", sum);
	}
	if (sum==number)
	{
		printf("是水仙花数");
	}

	return 0;
}