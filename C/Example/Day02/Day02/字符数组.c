#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>


int main()
{

	//char ch[] = "hello";//Ĭ�ϲ���\0��ʶ����

	//printf("%s\n",ch);

	//char ch1[] = { 'h','e','l','l','o' };//�������͵Ĳ���������\0

	//char ch2[100];

	//scanf("%[^\n]",ch2);

	//printf("%s",ch2);


	char ch1[] = "hello";
	char ch2[] = "world";

	char arr[20];

	//�ַ���ƴ��
	int index = 0;

	while (ch1[index] != '\0')
	{
		arr[index] = ch1[index];
		index++;
	}

	printf("index����:%d\n",index);

	while (ch2[index-5] != '\0')
	{
		arr[index] = ch2[index - 5];
		index++;
	}

	//����ַ���������ʶ
	arr[index] = '\0';

	printf("%s",arr);
	return 0;
}