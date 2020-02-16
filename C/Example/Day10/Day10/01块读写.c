#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main01()
{
	//二进制文件写

	//char arr[16] = "hello world";//sizeof(char) 16

	int arr[10] = { 888888,888888,888888,888888,5,6,7,8,9,10 };

	FILE* src = fopen("D:\\src.txt", "wb");

	if (!src)
	{
		return -1;
	}

	fwrite(arr, sizeof(int), 4, src);
	/*fprintf(src, "888888888888888888888888");*/
	
	fclose(src);

	return 0;
}

int main()
{
	//二进制读

	FILE* src = fopen("D:\\src.txt", "rb");

	if (!src)
	{
		return -1;
	}

	int arr[10] = { 0 };
	/*fread(arr, sizeof(int), 4, src);*/
	int i = 0;
	while (!feof(src))
	{
		fread(&arr[i++], sizeof(int), 1, src);
	}


	fclose(src); 

	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("%d\n",arr[2]);
	printf("%d\n",arr[3]);
	return 0;
}