#include <iostream>
using namespace std;
#include <string>

//×Ö·û´® ²åÈëºÍÉ¾³ı
void test01()
{
	string str = "hello";

	//²åÈë
	str.insert(1, "111");

	//hello h111elo
	cout << "str = " << str << endl;

	//É¾³ı
	str.erase(1, 3);
	cout << "str = " << str << endl;
}


int main(int argc, char* argv[])
{
	test01();


	return 0;
}