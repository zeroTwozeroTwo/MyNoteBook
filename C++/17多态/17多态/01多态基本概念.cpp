#include <iostream>
using namespace std;

//��̬

//������
class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class Cat :public Animal
{
public:
	//��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//����
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵��,��ô��������ĵ�ַ�Ͳ�����ǰ��,��Ҫ�����н׶ν��а�,Ҳ���ǵ�ַ���

//��̬��̬��������
//1.�м̳й�ϵ
//2.������д������麯��

//��̬��̬��ʹ��
//�����ָ���������	ָ���������

void doSpeak(Animal& animal)// Animal & animal = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}


int main(int argc, char* argv[])
{
	//test01();
	test02();



	return 0;
}