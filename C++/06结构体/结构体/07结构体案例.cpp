#include <iostream>
using namespace std;
#include <string>
#include <ctime>


struct Student
{
	//����
	string sName;
	//����
	int score;
};

//��ʦ�Ľṹ��
struct Teacher
{
	//����
	string tName;
	//ѧ������
	struct Student sArray[5];
};

void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		int studentLength = sizeof(tArray->sArray) / sizeof(tArray->sArray[0]);
		//ѭ����ÿ����ʦ����ѧ����ֵ
		for (int j = 0; j < studentLength; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}
}

void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ����:" << tArray[i].tName << endl;
		int studentLength = sizeof(tArray->sArray) / sizeof(tArray->sArray[0]);
		for (int j = 0; j < studentLength; j++)
		{
			cout << "\tѧ������: " << tArray[i].sArray[j].sName <<
				"���Է���:  " << tArray[i].sArray[j].score << endl;
		}
	}
}

int main(int argc, char* argv[])
{
	//���������
	srand((unsigned int)time(NULL));
	//1.����3����ʦ������
	struct Teacher tArray[3];
	//2.ͨ��������3����ʦ����Ϣ��ֵ,������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(struct Teacher);
	allocateSpace(tArray, len);
	//3.��ӡ������ʦ������ѧ������Ϣ
	printInfo(tArray, len);
	return 0;
}
