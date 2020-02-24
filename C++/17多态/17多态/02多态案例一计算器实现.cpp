#include <iostream>
using namespace std;
#include <string>

//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

//��ͨд��
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
			cout << "����Ĳ���������" << endl;
			return 0;
		}
		//�������չ�µĹ���,�����޸�Դ��
		//����ʵ������ �ᳫ ����ԭ��
		//����ԭ��:����չ���п���,���޸Ľ��йر�
	}

	int m_Num1;//������1
	int m_Num2;//������2
};

void test01()
{
	//��������������
	Calculator calculator;
	calculator.m_Num1 = 10;
	calculator.m_Num2 = 10;

	cout << calculator.m_Num1 << " + " << calculator.m_Num2 << " = " << calculator.getResult("+") << endl;

	cout << calculator.m_Num1 << " - " << calculator.m_Num2 << " = " << calculator.getResult("-") << endl;

	cout << calculator.m_Num1 << " * " << calculator.m_Num2 << " = " << calculator.getResult("*") << endl;

}

//���ö�̬ʵ�ּ�����

//��̬�ô�
//1.��֯�ṹ����
//2.�ɶ���ǿ

//ʵ�ּ������Ļ���(������)
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


//�ӷ���������
class AddCalculator :public AbstrackCalcalator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//������������
class SubCalculator :public AbstrackCalcalator
{
public:

	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//�˷���������
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
	//��̬ʹ������
	//�����ָ�����������ָ���������
	AbstrackCalcalator* abstrack = new AddCalculator;
	abstrack->m_Num1 = 10;
	abstrack->m_Num2 = 10;

	cout << abstrack->m_Num1 << " + " << abstrack->m_Num2 << " = " << abstrack->getResult() << endl;
	//�����ǵ�����
	delete abstrack;

	//��������
	abstrack = new SubCalculator;
	abstrack->m_Num1 = 10;
	abstrack->m_Num2 = 10;
	cout << abstrack->m_Num1 << " - " << abstrack->m_Num2 << " = " << abstrack->getResult() << endl;
	delete abstrack;

	//�˷�����
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