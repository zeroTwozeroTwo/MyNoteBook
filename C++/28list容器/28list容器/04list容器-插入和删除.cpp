#include <iostream>
using namespace std;
#include <list>

//listÈİÆ÷²åÈëºÍÉ¾³ı
void printList(const list<int> &l)
{
	for(list<int>::const_iterator it = l.begin();it!=l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	list<int> l;

	//Î²²å
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);



	//Í·²å
	l.push_front(100);
	l.push_front(200);
	l.push_front(300);


	printList(l);

	//Î²É¾
	l.pop_back();
	printList(l);
	//Í·É¾
	l.pop_front();
	printList(l);

	//insert²åÈë
	list<int>::iterator it = l.begin();
	
	l.insert(++it, 1000);
	printList(l);

	//É¾³ı
	it = l.begin();
	l.erase(++it);
	printList(l);

	//ÒÆ³ı
	l.push_back(10000);
	l.push_back(10000);
	l.push_back(10000);
	l.push_back(10000);
	printList(l);
	l.remove(10000);
	printList(l);

	//Çå¿Õ
	l.clear();
	printList(l);
}


int main(int argc,char *argv[])
{

	test01();


	return 0;
}