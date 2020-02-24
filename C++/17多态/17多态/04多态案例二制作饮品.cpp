#include <iostream>
using namespace std;


//��̬����2 ������Ʒ
class AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//��������
	virtual void PutSomeThing() = 0;

	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomeThing();
	}
};

//��������
class Coffee :public AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//��������
	virtual void PutSomeThing()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}

};

//��������
class Tea :public AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//��������
	virtual void PutSomeThing()
	{
		cout << "�������" << endl;
	}

};

void doWork(AbstractDrinking * abstract) //AbstractDrinking * abs = new Coffee;
{
	abstract->makeDrink();

	delete abstract;//�ͷ�
}

void test01()
{
	//��������
	doWork(new Coffee);

	cout << "-----------------" << endl;
	//������Ҷ
	doWork(new Tea);
}

int main(int argc, char* argv[])
{
	test01();



	return 0;
}