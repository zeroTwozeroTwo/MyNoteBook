#pragma once
#include <iostream>
#include "pointer.h"
using namespace std;

//Բ��
class Circle
{
public:
	//��ư뾶
	void setR(int r);
	//��ȡ�뾶
	int getR();
	//����Բ��
	void setCenter(Pointer center);
	//��ȡԲ��
	Pointer getCenter();
private:
	int m_R;//�뾶
	//�����п�������һ����,��Ϊ�����еĳ�Ա
	Pointer m_Center;//Բ��
};