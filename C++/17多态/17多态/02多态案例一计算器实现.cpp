#include <iostream>
using namespace std;
#include <string>

//分别利用普通写法和多态技术实现计算器

//普通写法
class Calculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		else if (oper == "/")
		{
			return m_Num1 / m_Num2;
		}
		else
		{
			cout << "传入的操作符错误" << endl;
			return 0;
		}
		//如果想扩展新的功能,需求修改源码
		//在真实开发中 提倡 开闭原则
		//开闭原则:对扩展进行开放,对修改进行关闭
	}

	int m_Num1;//操作数1
	int m_Num2;//操作数2
};

void test01()
{
	//创建计算器对象
	Calculator calculator;
	calculator.m_Num1 = 10;
	calculator.m_Num2 = 10;

	cout << calculator.m_Num1 << " + " << calculator.m_Num2 << " = " << calculator.getResult("+") << endl;

	cout << calculator.m_Num1 << " - " << calculator.m_Num2 << " = " << calculator.getResult("-") << endl;

	cout << calculator.m_Num1 << " * " << calculator.m_Num2 << " = " << calculator.getResult("*") << endl;

}

//利用多态实现计算器

//多态好处
//1.组织结构清晰
//2.可读性强

//实现计算器的基类(抽象类)
class AbstrackCalcalator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};


//加法计算器类
class AddCalculator :public AbstrackCalcalator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//减法计算器类
class SubCalculator :public AbstrackCalcalator
{
public:

	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//乘法计算器类
class MulCalculator :public AbstrackCalcalator
{
public:

	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};


void test02()
{
	//多态使用条件
	//父类的指针或者引用来指向子类对象
	AbstrackCalcalator* abstrack = new AddCalculator;
	abstrack->m_Num1 = 10;
	abstrack->m_Num2 = 10;

	cout << abstrack->m_Num1 << " + " << abstrack->m_Num2 << " = " << abstrack->getResult() << endl;
	//用完后记得销毁
	delete abstrack;

	//减法运算
	abstrack = new SubCalculator;
	abstrack->m_Num1 = 10;
	abstrack->m_Num2 = 10;
	cout << abstrack->m_Num1 << " - " << abstrack->m_Num2 << " = " << abstrack->getResult() << endl;
	delete abstrack;

	//乘法运算
	abstrack = new MulCalculator;
	abstrack->m_Num1 = 10;
	abstrack->m_Num2 = 10;
	cout << abstrack->m_Num1 << " * " << abstrack->m_Num2 << " = " << abstrack->getResult() << endl;
	delete abstrack;
	
}

int main(int argc, char* argv[])
{

	//test01();
	test02();

	return 0;
}