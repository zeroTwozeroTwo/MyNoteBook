#include<stdio.h>

/*
1.����ƥ����ַ��� ������ȫƥ�� ƥ����� = �ַ�������
2.���ƥ��һ���ַ�������Ҫ��¼��ƥ���ַ�����ַ
3.���ƥ��һ��δ�ɹ� �ص���¼��ƥ���ַ�����ַ+1
4.���ƥ��ı�ƥ���ַ����Ľ�β ƥ����� ������ �ַ�������
*/

char* mystrstr(char* dest, char* src);


int main()
{
	char arr[] = "hello world";
	char src[] = "llo";

	char* p = mystrstr(arr, src);
	printf("%s\n", p);
	return 0;
}

char* mystrstr(char* dest, char* src)
{
	//int i = 0;
	//int j = 0;
	//int count = 0;
	//int len = strlen(src);
	char* temp = src;
	char* p = NULL;
	while (*dest)
	{
		p = dest;
		while (*dest == *temp)//ƥ����� = �ַ�������
		{
			//count++;
			dest++;
			temp++;
		}
		if (!*temp)//  '\0'
		{
			return p;
		}
		else
		{
			temp = src;
		}
		dest = p;
		dest++;
	}
	//����ֵ���
	return NULL;
}