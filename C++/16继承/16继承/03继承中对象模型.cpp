#include <iostream>
using namespace std;


//�̳��еĶ���ģ��
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:
	int m_D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷�
//��ת�ļ�·�� cd ����·����
//�鿴����
// cl /dl reportSingleClassLayout���� �ļ���

void test01()
{
	//16
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ���������������,����Ƿ��ʲ���,����ȷʵ���̳���ȥ��
	cout << "size of Son = " << sizeof(Son) << endl;
}

int main(int argc, char* argv[])
{
	test01();


	return 0;
}