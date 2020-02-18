#include <iostream>
using namespace std;
#include <string>


//1.���Ӣ�۽ṹ��
struct Hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex;
};


void bubbleSort(struct Hero heroes[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroes[j].age > heroes[j + 1].age)
			{
				struct Hero tempHero = heroes[j + 1];
				heroes[j + 1] = heroes[j];
				heroes[j] = tempHero;
			}
		}
	}
}

void printHeros(struct Hero heroes[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "����:  " << heroes[i].name << " ����:  " << heroes[i].age
			<< "  �Ա�:  " << heroes[i].sex << endl;
	}
}

int main(int argc, char* argv[])
{

	//2.����������5��Ӣ��
	struct Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ��ӡ:" << endl;
	printHeros(heroArray, len);
	//3.�������������,�������������������
	bubbleSort(heroArray, len);
	//4. �������Ľ����ӡ���
	cout << "������ӡ:" << endl;
	printHeros(heroArray, len);
	return 0;
}
