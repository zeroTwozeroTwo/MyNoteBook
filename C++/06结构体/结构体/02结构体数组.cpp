#include <iostream>
using namespace std;
#include <string>

//�ṹ������
//1.����ṹ��
struct Student
{
	string name;//����
	int age;//����
	int score;//����
};

int main(int argc, char* argv[])
{
	//2.�����ṹ������
	struct Student stuArray[3] =
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,55}

	};

	//�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "����:  " << stuArray[i].name
			<< "����:  " << stuArray[i].age
			<< "����:  " << stuArray[i].score
			<< endl;
	}

	return 0;
}
