#pragma once
#include <iostream>
#include "pointer.h"
using namespace std;

//圆类
class Circle
{
public:
	//设计半径
	void setR(int r);
	//获取半径
	int getR();
	//设置圆心
	void setCenter(Pointer center);
	//获取圆心
	Pointer getCenter();
private:
	int m_R;//半径
	//在类中可以让另一个类,作为本类中的成员
	Pointer m_Center;//圆心
};