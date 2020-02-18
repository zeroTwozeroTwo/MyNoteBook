//圆类
#include "circle.h"

//设计半径
void Circle::setR(int r)
{
	m_R = r;
}
//获取半径
int Circle::getR()
{
	return m_R;
}
//设置圆心
void Circle::setCenter(Pointer center)
{
	m_Center = center;
}
//获取圆心
Pointer Circle::getCenter()
{
	return m_Center;
}
