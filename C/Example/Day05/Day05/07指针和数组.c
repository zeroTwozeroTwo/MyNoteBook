#include<stdio.h>


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };


	//��������������׵�ַ������һ������
	/*printf("%p\n",arr);
	printf("%p\n",&arr[0]);*/
	//p = arr; [�������� *] ������
	//1.ָ�������ָ�� ������ָ���ʱ�򣬼�ӵĲ���������
	int* p = arr;

	//ָ�뽵������
	/**p = 100;
	*(p + 1) = 200;
	p[5] = 300;*/


	p++;
	*p = 200;

	for (int i = 0; i < 10; i++)
	{
		//*(p+1)  �ڴ��ַ����1*sizeof(int)
		printf("%d\n",arr[i]);
		//printf("%d\n",p[i]);
		//printf("%d\n", *(p + i));
	}

	//

	return 0;
}