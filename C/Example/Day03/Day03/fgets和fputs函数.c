#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ַ�����׼�������
int main()
{

	char arr[100];
	//��������һ�����ַ�ָ�룬�ڶ����Ǵ�С�����������ļ���
	fgets(arr,100,stdin);
	//puts���Զ�����
	//puts(arr);

	//printf("%s", arr);
	//��������һ�����ַ�ָ�룬�ڶ�������
	fputs(arr,stdout);//�����Զ��ӻ���

	return 0;
}