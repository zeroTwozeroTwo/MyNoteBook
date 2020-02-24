#include <iostream>
using namespace std;


//����ͬ�����
//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculator() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//������ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* video, Memory* memory)
	{
		this->cpu = cpu;
		this->memory = memory;
		this->vc = video;
	}


	//�ṩ�����ĺ���
	void work()
	{
		//�������������,���ýӿ�
		cpu->calculator();

		vc->display();

		memory->storage();
	}

	//�ṩ�������� �ͷ������������
	~Computer()
	{
		//�ͷ�CPU���
		if (cpu != NULL)
		{
			delete cpu;
			cpu = NULL;
		}
		//�ͷ��Կ����
		if (vc != NULL)
		{
			delete vc;
			vc = NULL;
		}
		//�ͷ��ڴ������
		if (memory != NULL)
		{
			delete memory;
			memory = NULL;
		}
	}

private:

	CPU* cpu;//CPU�����ָ��
	VideoCard* vc;//�Կ������ָ��
	Memory* memory;//�ڴ������ָ��
};

//���峧��
//Intel����
class IntelCPU :public CPU
{
	virtual void calculator()
	{
		cout << "Intel��CPU��ʼ������" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ��!" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢��" << endl;
	}
};

//Lenovo����
class LenovoCPU :public CPU
{
	virtual void calculator()
	{
		cout << "Lenovo��CPU��ʼ������" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��!" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
	}
};


void test01()
{
	//��һ̨�������
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;


	cout << "��һ̨���Կ�ʼ����" << endl;
	//������һ̨����
	Computer* computer = new Computer(intelCPU, intelCard, intelMemory);
	computer->work();
	delete computer;

	cout << "----------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//�ڶ�̨������װ
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	
	cout << "---------------" << endl;
	cout << "����̨���Կ�ʼ����" << endl;

	//����̨����
	Computer* computer3 = new Computer(new IntelCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}