#include <iostream>
#include <string>
using namespace std;


//������Ԫ
class Building;
class GoodGay
{
public:

	GoodGay();

	void visit();//�ιۺ��� ����Building�е�����

	Building* building;
};

class Building
{
	//GooGay���Ǳ���ĺ�����,���Է��ʱ�����˽�еĳ�Ա
	friend class GoodGay;
public:
	Building();

public:
	string m_SittingRoom;//����

private:

	string m_BedRoom;//����
};



//����д��Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û��������ڷ���: " << building->m_SittingRoom << endl;

	
	cout << "�û��������ڷ���: " << building->m_BedRoom << endl;
}


void test01()
{
	GoodGay gg;
	gg.visit();
}



int main(int argc, char* argv[])
{
	test01();


	return 0;
}