#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


//随机100000 数据 1 - 1000 写入文件中 读取出来 进行从小到大排序 再写入文件中

int main01()
{
	srand((unsigned int)time(NULL));

	FILE* src = fopen("D:\\paixu.txt", "w");
	if (!src)
	{
		return -1;
	}

	for (int i = 0; i < 100000; i++)
	{
		fprintf(src, "%d\n", rand() % 1000 + 1);
	}

	fclose(src);



	return 0;
}

int main02()
{
	unsigned int start_time = time(NULL);
	FILE* src = fopen("D:\\paixu.txt", "r");
	if (!src)
	{
		return -1;
	}
	int* p = (int*)malloc(sizeof(int) * 100000);

	for (int i = 0; i < 100000; i++)
	{
		fscanf(src, "%d\n", &p[i]);
	}

	for (int i = 0; i < 100000 - 1; i++)
	{
		for (int j = 0; j < 100000 - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

	fclose(src);

	src = fopen("D:\\paixu.txt", "w");

	for (int i = 0; i < 100000; i++)
	{
		fprintf(src, "%d\n", p[i]);
	}

	fclose(src);

	free(p);

	unsigned int end_time = time(NULL);

	printf("用时时间:%d(s)\n", end_time - start_time);

	return 0;
}

int main()
{
	unsigned int start_time = time(NULL);

	//读
	FILE* src = fopen("D:\\paixu.txt", "r");
	if (!src)
	{
		return -1;
	}
	int* p = (int*)malloc(sizeof(int) * 100000);

	int arr[1000] = { 0 };
	int value;
	int sum = 0;
	for (int i = 0; i < 100000; i++)
	{
		fscanf(src, "%d\n", &value);
		arr[value - 1]++;
	}

	fclose(src);

	//写
	src = fopen("D:\\paixu.txt", "w");
	for (int i = 0; i < 1000; i++)
	{
		/*sum += arr[i];
		printf("%d\n", arr[i]);*/
		for (int j = 0; j < arr[i]; j++)
		{
			fprintf(src, "%d\n", i + 1);
		}
	}

	fclose(src);
	free(p);

	unsigned int end_time = time(NULL);
	printf("用时:%d(s)\n", end_time - start_time);

	return 0;
}