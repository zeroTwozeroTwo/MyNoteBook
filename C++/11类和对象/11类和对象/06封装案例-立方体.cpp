#include <iostream>
using namespace std;

//�����������
//1.������������
//2.������Ժ���Ϊ
//3.��ȡ��������������
//4.�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����

class Cube
{
public:
	//���ó�
	void setL(int l)
	{
		m_L = l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//���ÿ�
	void setW(int w)
	{
		m_W = w;
	}
	//��ȡ��
	int getW()
	{
		return m_W;
	}
	//���ø�
	void setH(int h)
	{
		m_H = h;
	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}
	//��ȡ���������
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//��ȡ���������
	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	//���ó�Ա�����ж������������Ƿ����
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
	int m_L;//��
	int m_W;//��
	int m_H;//��
};

//����ȫ�ֺ����ж�,�����������Ƿ����
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
	//�������������
	Cube cube;
	cube.setL(10);
	cube.setW(10);
	cube.setH(10);

	//600
	cout << "cube�����Ϊ:" << cube.calculateS() << endl;
	//1000
	cout << "cube�����Ϊ:" << cube.calculateV() << endl;
	//�����ڶ���������
	Cube cube2;
	cube2.setW(10);
	cube2.setH(10);
	cube2.setL(10);

	bool ret = isSame(cube, cube2);
	if (ret)
	{
		cout << "cube1��cube2����ȵ�" << endl;
	}
	else
	{
		cout << "cube1��cube2�ǲ���ȵ�" << endl;
	}

	
	ret = cube.isSameByClass(cube2);
	if (ret)
	{
		cout << "��Ա�����ж�: cube1��cube2����ȵ�" << endl;
	}
	else
	{
		cout << "��Ա�����ж�: cube1��cube2�ǲ���ȵ�" << endl;
	}
	return 0;
}