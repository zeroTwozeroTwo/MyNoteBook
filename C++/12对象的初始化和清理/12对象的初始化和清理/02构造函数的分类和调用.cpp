#include <iostream>
using namespace std;

//1.���캯���ķ��༰����
//����
//	���ղ�������	�޲ι���(Ĭ�Ϲ���)���вι���
//	�������ͷ���	��ͨ����Ϳ������캯��
class Person
{
public:

	Person()
	{
		cout << "Person�Ĺ��캯������" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}

	//�������캯��
	Person(const Person& person)
	{
		//������������ϵ���������,������������
		age = person.age;
		cout << "Person�Ŀ������캯������" << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}
	int age;
};
//����
void test01()
{
	//1.���ŷ�
	//Person person;//Ĭ�Ϲ��캯���ĵ���
	//Person person1(10);//�вι��캯��
	//Person person2(person1);
	//cout << "person1������Ϊ:" << person1.age << endl;
	//cout << "person2������Ϊ:" << person2.age << endl;

	//ע������
	//����Ĭ�Ϲ��캯��ʱ��,��Ҫ��()
	//��Ϊ�������д���,����������Ϊ��һ������������,������Ϊ�ڴ�������
	//Person p1();

	
	//2.��ʾ��
	//Person p1;
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);

	//Person(10);//�������� �ص�:��ǰ��ִ�н�����,ϵͳ���������յ���������
	//cout << "aaaa" << endl;

	//ע������2
	//��Ҫ���ÿ������캯�� ��ʼ���������� ����������ΪPerson(p3) == Person p3;���������
	//Person(p3)
	
	//3.��ʽת����
	Person p4 = 10;//�൱��д�� Person p4 = Person(10);
	Person p5 = p4;
}

int main(int argc, char* argv[])
{
	test01();
	return 0;
}