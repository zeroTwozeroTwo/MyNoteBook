#include <iostream>
using namespace std;


//�̳з�ʽ

//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B = 20;//�����еı���Ȩ�޳�Ա ����������Ȼ�ǰ���Ȩ��
		//m_C = 30;//�����е�˽��Ȩ�޳�Ա ������ʲ���
	}
};

void test01()
{
	Son1 son;
	son.m_A = 100;
	//son.m_B = 200;// ��Son1�� m_B�Ǳ���Ȩ�� ������ʲ���
}

//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:

	void func()
	{
		m_A = 100; //�����й�����Ա,�������б�Ϊ����Ȩ��
		m_B = 100;	//�����б�����Ա,�������б�Ϊ����Ȩ��
		//m_C = 100;//������˽�г�Ա ������ʲ���
	}
};

void test02()
{
	Son2 son;
	//son.m_A = 1000;//��Son2�� m_A��Ϊ����Ȩ��,���������ʲ���
	//son.m_B = 1000;//��Son2�� m_B����Ȩ�� �����Է���
}

//˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3:private Base3
{
public:
	void func()
	{
		m_A = 100;//�����й�����Ա �������б�Ϊ ˽�г�Ա
		m_B = 100;//�����б�����Ա �������б�Ϊ ˽�г�Ա
		//m_C = 100;//������˽�г�Ա,������ʲ���
	}
};

class GrandSon3:public Son3
{
public:
	void func()
	{
		//m_A = 100; //����Son3�� m_A��Ϊ˽��,��ʹ�Ƕ���,Ҳ�޷�����
		//m_B = 100; //����Son3�� m_A��Ϊ˽��,��ʹ�Ƕ���,Ҳ�޷�����
		//m_C = 100;
	}
};

void test03()
{
	Son3 son;
	//son.m_A = 1000;//��Son3�� ��Ϊ ˽�г�Ա ������ʲ���
	//son.m_B = 1000;//��Son3�� ��Ϊ ˽�г�Ա ������ʲ���
	//son.m_C = 1000;//��Son3�� ��Ϊ ˽�г�Ա ������ʲ���
}

int main(int argc, char* argv[])
{



	return 0;
}