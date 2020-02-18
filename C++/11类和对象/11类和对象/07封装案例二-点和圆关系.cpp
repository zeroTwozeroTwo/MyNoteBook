#include <iostream>
using namespace std;
#include "circle.h"
#include "pointer.h"

//���Բ��ϵ����
////����
//class Pointer
//{
//public:
//	//����x
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡx
//	int getX()
//	{
//		return m_X;
//	}
//	//����y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡy
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

////Բ��
//class Circle
//{
//public:
//	//��ư뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Pointer center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Pointer getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//�뾶
//	//�����п�������һ����,��Ϊ�����еĳ�Ա
//	Pointer m_Center;//Բ��
//};

//�жϵ��Բ��ϵ
void isInCircle(Circle& circle, Pointer& pointer)
{
	//��������֮����� ƽ��
	int distance = (circle.getCenter().getX() - pointer.getX()) * (circle.getCenter().getX() - pointer.getX()) +
		(circle.getCenter().getY() - pointer.getY()) * (circle.getCenter().getY() - pointer.getY());
	//����뾶��ƽ��
	int rDistance = circle.getR() * circle.getR();
	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if(distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}


int main(int argc, char* argv[])
{

	//����Բ
	Circle circle;
	circle.setR(10);
	Pointer center;
	center.setX(10);
	center.setY(0);
	circle.setCenter(center);
	//������
	Pointer pointer;
	pointer.setX(10);
	pointer.setY(10);
	//�жϹ�ϵ
	isInCircle(circle, pointer);
	return 0;
}
