#include <iostream>
#include <string>
using namespace std;

//��Ա��������Ϊ˽��
//1.�����Լ����ƶ�дȨ��
//2.����д���Լ�����ݵ���Ч��


//�������
class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}

	//��ȡ���� �ɶ���д ������޸�(����ķ�Χ������ 0 - 150֮��)
	int getAge()
	{
		//m_Age = 0;//��ʼ��Ϊ0��
		return m_Age;
	}

	//��������
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "���䷶Χ���Ϸ�!" << endl;
			return;
		}
		m_Age = age;
	}

	//��������ֻд
	void setLover(string lover)
	{
		m_Lover = lover;
	}
	
private:
	//���� �ɶ���д
	string m_Name;
	//���� ֻ��
	int m_Age;
	//���� ֻд
	string m_Lover;
};
int main(int argc,char * argv[])
{
	Person person;
	//person.m_Name = "����";
	person.setName("����");

	cout << "����Ϊ:" << person.getName() << endl;

	//person.m_Age = 18;
	//person.setAge(18);
	person.setAge(1000);
	cout << "����Ϊ:" << person.getAge() << endl;

	person.setLover("�Ծ�");

	//cout << "����Ϊ:" << person.getLover() << endl; //�ǲ����Է��ʵ�
	return 0;
}