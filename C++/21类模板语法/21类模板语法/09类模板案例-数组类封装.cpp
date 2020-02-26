#include <iostream>
using namespace std;
#include "MyArray.hpp"
#include <string>



void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	MyArray<int> arr(5);
	//MyArray<int> arr2(arr);
	//MyArray<int> arr3(100);

	//arr3 = arr;

	for (int i = 0; i < 5; i++)
	{
		arr.Push_Back(i);//����β�巨�������в�������
	}

	cout << "arr1�Ĵ�ӡ���Ϊ:" << endl;
	printIntArray(arr);

	cout << "arr1������Ϊ:" << arr.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ:" << arr.getSize() << endl;


	MyArray<int> arr2(arr);
	cout << "arr2�Ĵ�ӡ���Ϊ:" << endl;
	printIntArray(arr2);

	//βɾ
	arr2.Pop_Back();

	cout << "arr2βɾ��:" << endl;
	cout << "arr2������Ϊ:" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ:" << arr2.getSize() << endl;
}

//�����Զ������������
class Person
{
public:
	Person()
	{
		
	}

	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};


void printPersonArray(MyArray<Person> & arr)
{
	for(int i = 0;i < arr.getSize();i++)
	{
		cout << "����:" << arr[i].m_Name << "\t����:" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person> arr(10);

	Person p1("�����", 999);
	Person p2("����", 20);
	Person p3("槼�", 17);
	Person p4("����", 19);
	Person p5("������", 24);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	printPersonArray(arr);


	//�������
	cout << "arr����Ϊ:" << arr.getCapacity() << endl;
	//�����С
	cout << "arr��СΪ:" << arr.getSize() << endl;
}

int main(int argc, char* argv[])
{

	//test01();
	test02();

	return 0;
}