#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{

	//1.const����ָ��
	int a = 10;
	int b = 10;

	//ָ��ָ���ֵ�����Ը�,ָ���ֵ���Ը�
	const int* p = &a;
	//*p = 10;
	//p = &b;

	//2.const���γ��� ָ�볣��
	//ָ���ָ�򲻿��Ը�,ָ��ָ���ֵ���Ը�
	int* const p1 = &a;

	//p1 = &b;
	//*p1 = 100;

	//3.const����ָ��ͳ���
	//ָ���ָ���ָ���ֵ,�������Ը�
	const int* const p2 = &a;
	
	
	return 0;
}
