#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


int main01()
{

	//дһ��
	char* p = "hello world";

	FILE* src = fopen("D:\\src.txt", "w");

	if (!src)
	{
		return -1;
	}

	//�ɹ�����0 ʧ�ܷ���-1
	int value = fputs(p, src);

	if (!value)
	{
		printf("�ɹ�");
	}



	fclose(src);

	return 0;
}

int main02()
{
	FILE* src = fopen("D:\\src.txt", "r");

	if (!src)
	{
		return -1;
	}
	//���ȡ
	char buf[1024];//1KB
	
	fgets(buf, 1024, src);

	printf("%s\n",buf);

	fclose(src);

	return 0;
}

int main()
{
	FILE* src = fopen("D:\\src.txt", "r");
	
	if (!src)
	{
		return -1;
	}

	//char buf[1024];
	char* buf = (char*)malloc(sizeof(char) * 1024);

	//feof �ж��ļ����Ƿ񵽽�β  EOF �ж��ַ��Ƿ񵽽�β
	//feof ��0ֵ:�Ѿ����ļ���β   0:û�е��ļ���β
	while (!feof(src))
	{
		memset(buf, 0, 1024);
		fgets(buf, 1024, src);
		printf("%s",buf);
	}
	
	fclose(src);

	return 0;
}