#include <iostream>
using namespace std;
#include <deque>

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;	�����е����ݲ������޸�
		cout << *it << " ";
	}
	cout << endl;
}


//deque���� ���캯��
void test01()
{
	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}

	printDeque(d);

	deque<int> d2(d.begin(), d.end());
	printDeque(d2);

	deque<int> d3(10, 100);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);

}


int main(int argc, char* argv[])
{
	test01();



	return 0;
}