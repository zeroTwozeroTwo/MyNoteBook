#include <iostream>
using namespace std;


class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger my_integer);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//Ç°ÖÃµÝÔö
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}

	//ºóÖÃµÝÔö
	MyInteger operator++(int)
	{
		MyInteger temp = *this;

		m_Num++;

		return temp;
	}

	//Ç°ÖÃµÝ¼õ
	MyInteger& operator--()
	{
		m_Num--;
		return *this;
	}

	//ºóÖÃµÝ¼õ
	MyInteger operator--(int)
	{
		MyInteger temp = *this;

		m_Num--;

		return temp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger my_integer)
{
	cout << my_integer.m_Num;
	return cout;
}


void test01()
{
	MyInteger my_integer;
	//cout << ++my_integer << endl;
	//cout << my_integer << endl;

	cout << my_integer++ << endl;
	cout << my_integer << endl;
}

void test02()
{
	MyInteger my_integer;
	//cout << --my_integer << endl;
	//cout << my_integer << endl;

	cout << my_integer-- << endl;
	cout << my_integer << endl;
}

int main(int argc, char* argv[])
{
	//test01();

	test02();
	
	return 0;
}