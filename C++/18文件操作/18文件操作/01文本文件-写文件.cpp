#include <iostream>
using namespace std;
#include <fstream> // 头文件包含

//文本文件 写文件

void test01()
{
	//1.包含头文件 fstream
	
	//2.创建流对象 OutPutStream
	ofstream ofstream;

	//3.指定打开方式
	ofstream.open("test.txt", ios::out);

	//4.写内容
	ofstream << "姓名:张三" << endl;
	ofstream << "性别:男" << endl;
	ofstream << "年龄:18" << endl;

	//5.关闭文件
	ofstream.close();
}

int main(int argc, char* argv[])
{

	test01();


	return 0;
}