#include<stdio.h>
#include<string.h>


void reverse(char* p);

int main()
{
	char arr[] = "hello world";//dlrow olleh;
	reverse(arr);

	printf("%s\n", arr);

	return 0;
}

void reverse(char* arr)
{
	int length = strlen(arr);
	/*printf("%d\n",length);*/

	//printf("%c\n", arr[length - 1]);
	//�ַ������׵�ַ
	char* p1 = arr;
	//�ַ������һ������Ч�ַ��ĵ�ַ
	char* p2 = &arr[length - 1];
	while (p1 < p2)
	{
		char temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}

}