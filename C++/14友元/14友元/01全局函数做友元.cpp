#include <iostream>
#include <string>
using namespace std;

//��������
class Building
{
	//goodGayȫ�ֺ����� Building�ĺ�����,���Է���Building��˽�еĳ�Ա
	friend 	void goodGay(Building* building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;//����

private:
	string m_BedRoom;//����
};

//ȫ�ֺ���
void goodGay(Building* building)
{
	cout << "�û���ȫ�ֺ��� ���ڷ���: " << building->m_SittingRoom << endl;

	
	cout << "�û���ȫ�ֺ��� ���ڷ���: " << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(&building);
}

int main(int argc, char* argv[])
{
	test01();

	return 0;
}
