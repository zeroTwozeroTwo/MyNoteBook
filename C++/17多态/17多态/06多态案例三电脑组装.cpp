#include <iostream>
using namespace std;


//抽象不同零件类
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculator() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

//抽象的内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* video, Memory* memory)
	{
		this->cpu = cpu;
		this->memory = memory;
		this->vc = video;
	}


	//提供工作的函数
	void work()
	{
		//让零件工作起来,调用接口
		cpu->calculator();

		vc->display();

		memory->storage();
	}

	//提供析构函数 释放三个电脑零件
	~Computer()
	{
		//释放CPU零件
		if (cpu != NULL)
		{
			delete cpu;
			cpu = NULL;
		}
		//释放显卡零件
		if (vc != NULL)
		{
			delete vc;
			vc = NULL;
		}
		//释放内存条零件
		if (memory != NULL)
		{
			delete memory;
			memory = NULL;
		}
	}

private:

	CPU* cpu;//CPU的零件指针
	VideoCard* vc;//显卡的零件指针
	Memory* memory;//内存条零件指针
};

//具体厂商
//Intel厂商
class IntelCPU :public CPU
{
	virtual void calculator()
	{
		cout << "Intel的CPU开始计算了" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了!" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了" << endl;
	}
};

//Lenovo厂商
class LenovoCPU :public CPU
{
	virtual void calculator()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了!" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了" << endl;
	}
};


void test01()
{
	//第一台电脑零件
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;


	cout << "第一台电脑开始工作" << endl;
	//创建第一台电脑
	Computer* computer = new Computer(intelCPU, intelCard, intelMemory);
	computer->work();
	delete computer;

	cout << "----------------" << endl;
	cout << "第二台电脑开始工作" << endl;
	//第二台电脑组装
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	
	cout << "---------------" << endl;
	cout << "第三台电脑开始工作" << endl;

	//第三台电脑
	Computer* computer3 = new Computer(new IntelCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}