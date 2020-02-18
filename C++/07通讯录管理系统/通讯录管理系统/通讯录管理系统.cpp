#include <iostream>
#include <stdlib.h>
#include <string>
#define MAX 1000
using namespace std;
//封装函数显示界面 如void showMenu()
//在main函数中调用封装好的函数

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};

//设计通讯录结构体
struct AddressBooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_Size;
};

//1.添加联系人
void addPerson(struct AddressBooks* address_books)
{
	//判断通讯录时候已满,如果满了,就不再添加
	if (address_books->m_Size == MAX)
	{
		cout << "通讯录已满,无法添加!" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		address_books->personArray[address_books->m_Size].m_Name = name;
		//性别
		cout << "请输入性别:  " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		while (true)
		{
			//如果输入的是1 或者2 可以退出循环,因为输入的是正确值
			//如果输入有误,重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				address_books->personArray[address_books->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误,请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄: " << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age >= 0 && age <= 120)
			{
				address_books->personArray[address_books->m_Size].m_Age = age;
				break;
			}
			cout << "输入有误,请重新输入" << endl;
		}
		//电话
		cout << "请输入联系电话:" << endl;
		string phone;
		cin >> phone;
		address_books->personArray[address_books->m_Size].m_Phone = phone;
		//住址
		cout << "请输入家庭住址:" << endl;
		string address;
		cin >> address;
		address_books->personArray[address_books->m_Size].m_Addr = address;
		//更新通讯录人数
		address_books->m_Size++;//++代表添加联系人完成
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

//2.显示所有联系人
void showPerson(const struct AddressBooks* address_books)
{
	//判断通讯录中人数是否为0,如果为0,提示记录为空
	//如果不为0,显示记录的联系人信息
	if (address_books->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		//输出表头
		cout << "姓名" << "\t" << "性别" << "\t" << "年龄" << "\t" << "电话" << "\t" << "住址" << "\t" << endl;
		for (int i = 0; i < address_books->m_Size; i++)
		{
			cout << address_books->personArray[i].m_Name << "\t"
				<< (address_books->personArray[i].m_Sex == 1 ? "男" : "女") << "\t"
				<< address_books->personArray[i].m_Age << "\t"
				<< address_books->personArray[i].m_Phone << "\t"
				<< address_books->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//检测联系人是否存在,如果存在,返回联系人所在数组中的具体位置,不存在返回-1
//参数1 通讯录  参数2 对比姓名
int isExist(struct AddressBooks* address_books, string name)
{
	for (int i = 0; i < address_books->m_Size; i++)
	{
		//比对用户名
		if (address_books->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;//如果没找到返回-1
}

//3.删除指定联系人
void deletePerson(struct AddressBooks* address_books)
{
	cout << "请输入您要删除的联系人:" << endl;
	string name;
	cin >> name;
	int ret = isExist(address_books, name);
	if (ret != -1)//找到了联系人
	{
		//查找到人,要进行删除操作
		for (int i = ret; i < address_books->m_Size; i++)
		{
			//数据前移
			address_books->personArray[i] = address_books->personArray[i + 1];
		}
		//更新通讯录中的人员数
		address_books->m_Size--;
		cout << "删除成功" << endl;
	}
	else//未找到联系人
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}


//4.查找指定联系人信息
void findPerson(struct AddressBooks* address_books)
{
	cout << "请输入您要查找的联系人: " << endl;
	string name;
	cin >> name;
	//判断指定的联系人是否存在
	int ret = isExist(address_books, name);
	if (ret != -1)//找到了联系人
	{
		cout << "姓名: " << address_books->personArray[ret].m_Name << "\t"
			<< "性别: " << address_books->personArray[ret].m_Sex << "\t"
			<< "年龄: " << address_books->personArray[ret].m_Age << "\t"
			<< "电话: " << address_books->personArray[ret].m_Phone << "\t"
			<< "住址: " << address_books->personArray[ret].m_Addr << endl;
	}
	else//未找到联系人
	{
		cout << "查无此人" << endl;
	}
	//清屏
	system("pause");
	system("cls");
}


//5.修改指定联系人信息
void modifyPerson(struct AddressBooks* address_books)
{
	cout << "请输入您要修改的联系人:" << endl;
	string name;
	cin >> name;
	int ret = isExist(address_books, name);

	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		address_books->personArray[ret].m_Name = name;
		//性别
		cout << "请输入性别:  " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		while (true)
		{
			//如果输入的是1 或者2 可以退出循环,因为输入的是正确值
			//如果输入有误,重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				address_books->personArray[address_books->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误,请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄: " << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age >= 0 && age <= 120)
			{
				address_books->personArray[address_books->m_Size].m_Age = age;
				break;
			}
			cout << "输入有误,请重新输入" << endl;
		}
		//电话
		cout << "请输入联系电话: " << endl;
		string phone;
		cin >> phone;
		address_books->personArray[ret].m_Phone = phone;
		//住址
		cout << "请输入家庭住址: " << endl;
		string address;
		cin >> address;
		address_books->personArray[ret].m_Addr = address;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}


//6.清空所有联系人
void cleanPerson(struct AddressBooks* address_books)
{
	cout << "是否要清空?" << endl;
	cout << "0 --- 不清空" << endl;
	cout << "1 --- 清空" << endl;
	int select = 0;//记录用户选择
	cin >> select;
	if (select)
	{
		address_books->m_Size = 0;//将当前记录联系人数量置为0,做逻辑清空操作
		cout << "通讯录已清空" << endl;
		//按任意键继续
	}
	else
	{
		cout << "返回主菜单..." << endl;
	}
	system("pause");
	system("cls");
}


//菜单界面
void showMneu()
{
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空联系人  *****" << endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "**************************" << endl;
}

int main(int argc, char* argv[])
{
	//创建通讯录结构体变量
	struct AddressBooks address_books;
	//初始化通讯录中当前人员个数
	address_books.m_Size = 0;

	int select = 0;
	while (true)
	{
		//显示菜单
		showMneu();

		cin >> select;
		switch (select)
		{
		case 1://1.添加联系人
			addPerson(&address_books);//利用地址传递,可以修饰实参
			break;
		case 2://2.显示联系人
			showPerson(&address_books);
			break;
		case 3://3.删除联系人
			deletePerson(&address_books);
			break;
		case 4://4.查找联系人
			findPerson(&address_books);
			break;
		case 5://5.修改联系人
			modifyPerson(&address_books);
			break;
		case 6://6.清空联系人
			cleanPerson(&address_books);
			break;
		case 0://0.退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			exit(0);
		default://其他选项
			cout << "选择错误请重新选择" << endl;
			break;
		}
	}
	return 0;
}
