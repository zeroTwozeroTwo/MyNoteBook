#include<stdio.h>

int main()
{
	int arrays[10] = {0};

	//printf("%-*d",2,1);
	//�鿴���鳤��,ȡ����������һƬ�ڴ�ĳ��ȣ�Ȼ������ֽڵĳ��Ⱦ�������ĳ���
	printf("���鳤�ȣ�%d\n",sizeof(arrays)/sizeof(arrays[0]));

	printf("%d",arrays[5]);

}