#include <iostream>
using namespace std;

//立方体类设计
//1.创建立方体类
//2.设计属性和行为
//3.获取立方体面积和体积
//4.分别利用全局函数和成员函数 判断两个立方体是否相等

class Cube
{
public:
	//设置长
	void setL(int l)
	{
		m_L = l;
	}
	//获取长
	int getL()
	{
		return m_L;
	}
	//设置宽
	void setW(int w)
	{
		m_W = w;
	}
	//获取宽
	int getW()
	{
		return m_W;
	}
	//设置高
	void setH(int h)
	{
		m_H = h;
	}
	//获取高
	int getH()
	{
		return m_H;
	}
	//获取立方体面积
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//获取立方体体积
	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube& cube)
	{
		if (m_W == cube.getW() && m_L == cube.getL() && m_H == cube.getH())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	int m_L;//长
	int m_W;//宽
	int m_H;//高
};

//利用全局函数判断,两个立方体是否相等
bool isSame(Cube& cube1, Cube& cube2)
{
	if (cube1.getL() == cube2.getL() && cube1.getW() == cube2.getW() && cube1.getH() == cube2.getH())
	{
		return true;
	}
	return false;
}

int main(int argc, char* argv[])
{
	//创建立方体对象
	Cube cube;
	cube.setL(10);
	cube.setW(10);
	cube.setH(10);

	//600
	cout << "cube的面积为:" << cube.calculateS() << endl;
	//1000
	cout << "cube的面积为:" << cube.calculateV() << endl;
	//创建第二个立方体
	Cube cube2;
	cube2.setW(10);
	cube2.setH(10);
	cube2.setL(10);

	bool ret = isSame(cube, cube2);
	if (ret)
	{
		cout << "cube1和cube2是相等的" << endl;
	}
	else
	{
		cout << "cube1和cube2是不相等的" << endl;
	}

	
	ret = cube.isSameByClass(cube2);
	if (ret)
	{
		cout << "成员函数判断: cube1和cube2是相等的" << endl;
	}
	else
	{
		cout << "成员函数判断: cube1和cube2是不相等的" << endl;
	}
	return 0;
}