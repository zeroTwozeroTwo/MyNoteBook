#include <iostream>
using namespace std;


//��ͨʵ��ҳ��

//Javaҳ��
//class Java
//{
//public:
//
//	void header()
//	{
//		cout << "��ҳ,������,��¼,ע��.....(����ͷ��)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "��������,��������,վ�ڵ�ͼ....(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java,Python,C++....(���������б�)" << endl;
//	}
//
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python
//{
//public:
//
//	void header()
//	{
//		cout << "��ҳ,������,��¼,ע��.....(����ͷ��)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "��������,��������,վ�ڵ�ͼ....(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java,Python,C++....(���������б�)" << endl;
//	}
//
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class CPP
//{
//public:
//
//	void header()
//	{
//		cout << "��ҳ,������,��¼,ע��.....(����ͷ��)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "��������,��������,վ�ڵ�ͼ....(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java,Python,C++....(���������б�)" << endl;
//	}
//
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};


//�̳�ʵ��ҳ��
//����ҳ����
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ,������,��¼,ע��.....(����ͷ��)" << endl;
	}

	void footer()
	{
		cout << "��������,��������,վ�ڵ�ͼ....(�����ײ�)" << endl;
	}

	void left()
	{
		cout << "Java,Python,C++....(���������б�)" << endl;
	}
};

//�̳еĺô�:�����ظ�����
//�﷨: class ����: �̳з�ʽ ����
//���� Ҳ��Ϊ ������
//���� Ҳ��Ϊ ����


//Javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//Pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++ҳ��
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "CPPѧ����Ƶ" << endl;
	}

};


void test01()
{
	cout << "Java������Ƶҳ������:	  " << endl;
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();

	cout << "-------------------" << endl;
	cout << "Python������Ƶҳ������: " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "-------------------" << endl;
	cout << "C++������Ƶҳ������: " << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}


int main(int argc, char* argv[])
{
	//test01();


	return 0;
}