#include <iostream>
using namespace std;

const double PI = 3.14;//Բ����
//���һ��Բ��,��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ: 2 * PI * �뾶

//class �������һ����,���������ŵľ���������
class Circle
{
	//����Ȩ��
public://����Ȩ��
	//����
	int m_r;
	//��Ϊ
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main(int argc, char* argv[])
{
	//ͨ��Բ�� ���������Բ(����)
	//ʵ���� (ͨ��һ���� ����һ������Ĺ���)
	Circle circle;
	//��Բ����,�����Խ��и�ֵ
	circle.m_r = 10;
	cout << "Բ���ܳ�Ϊ:" << circle.calculateZC() << endl;

	return 0;
}