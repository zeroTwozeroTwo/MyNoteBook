#include <iostream>
using namespace std;
#include <stack>


//ջstack����
void test01()
{
	//�ص�:�����Ƚ���������ݽṹ
	stack<int> s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//ֻҪջ��Ϊ��,�鿴ջ��,����ִ�г�ջ����
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ: " << s.top() << endl;
		//��ջ
		s.pop();
	}

	cout << "ջ�Ĵ�С:" << s.size() << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}