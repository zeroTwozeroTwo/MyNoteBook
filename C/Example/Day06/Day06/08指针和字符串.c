#include<stdio.h>
#include<string.h>

int main01()
{
	char arr[] = "hello world";
	char* p;
	p = arr;
	*p = 'A';//arr[0]
	p++;
	*p = 'B';//arr[1]

	printf("%d\n",sizeof(arr));//12
	printf("%d\n",strlen(arr));//11
	printf("%d\n",strlen(p));//10
	

	printf("%s\n", p);


	return 0;
}

int main()
{
	char* arr = "hello world";//������
	char arr1 = "hello world";//ջ��
	printf("%s\n",arr);
	printf("%c\n",arr[0]);

	char* p = arr;

	//�ַ���������һ������������ ���Զ�ȡ�ַ������ַ������ǲ����޸ġ�
	//p[0] = 'A';

	p = "hell world";



	return 0;
}