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

	printf("%s\n",p);
	return 0;
}

char* mystrstr(char* dest, char* src)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int len = strlen(src);
	char* p = NULL;
	while (dest[i] != '\0')
	{
		while (dest[i] == src[j])//ƥ����� = �ַ�������
		{
			if (!count)
			{
				//���ƥ��ɹ�һ���ַ� ��Ҫ��¼λ��
				p = &dest[i];
			}
			count++;
			i++;
			j++;
			//ƥ��ɹ�
			if (count == len)
			{
				return p;
			}
		}
		if (count < len)
		{
			i = i - count;
			j = 0;
			count = 0;
			//continue;
		}
		i++;
	}

	//����ֵ���
	return NULL;
}