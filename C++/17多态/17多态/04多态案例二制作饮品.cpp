#include <iostream>
using namespace std;


//多态案例2 制作饮品
class AbstractDrinking
{
public:

	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入佐料
	virtual void PutSomeThing() = 0;

	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomeThing();
	}
};

//制作咖啡
class Coffee :public AbstractDrinking
{
public:

	//煮水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入佐料
	virtual void PutSomeThing()
	{
		cout << "加入糖和牛奶" << endl;
	}

};

//制作咖啡
class Tea :public AbstractDrinking
{
public:

	//煮水
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入佐料
	virtual void PutSomeThing()
	{
		cout << "加入枸杞" << endl;
	}

};

void doWork(AbstractDrinking * abstract) //AbstractDrinking * abs = new Coffee;
{
	abstract->makeDrink();

	delete abstract;//释放
}

void test01()
{
	//制作咖啡
	doWork(new Coffee);

	cout << "-----------------" << endl;
	//制作茶叶
	doWork(new Tea);
}

int main(int argc, char* argv[])
{
	test01();



	return 0;
}