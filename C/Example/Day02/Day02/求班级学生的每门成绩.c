#include<stdio.h>


int main()
{

	int scores[3][3];
	
	int line = sizeof(scores) / sizeof(scores[0]);//列的长度
	printf("列的长度为:%d\n",line);
	int len = sizeof(scores[0])/sizeof(scores[0][0]);//行的长度
	printf("行的长度为:%d\n",len);


	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < len; j++)
		{
			printf("请输入第%d学生第%d门成绩:", i + 1, j + 1);
			scanf_s("%d", &scores[i][j]);
		}
	}

	int sum = 0;

	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < len; j++)
		{
			sum += scores[i][j];
		}
		printf("第%d名学生的总成绩为:%d\n", i + 1, sum);
		printf("第%d名学生的平均成绩为:%d\n", i + 1, sum / len);
		sum = 0;
	}

	return 0;
}