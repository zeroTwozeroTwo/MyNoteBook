#include <iostream>
using namespace std;


/*                          string �ַ���ƴ��
 * - string& operator+=(const char* str);               //����+=������
 * - string& operator+=(const char c);                  //����+=������
 * - string& operator+=(const string& str)              //����+=������
 * - string& append(const char* s);                     //���ַ���s���ӵ���ǰ�ַ�����β
 * - string& append(const char* s,int n);               //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
 * - string& append(const string& s);                   //ͬoperator+=(const string& str);
 * - string& append(cosnt string& s, int pos, int n);   //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
 */

void test01()
{
    string str1 = "��";

    str1 += "������Ϸ";

    cout << "str1 = " << str1 << endl;

    str1 += ';';

    cout << "str1 = " << str1 << endl;

    string str2 = "LOL DNF";

    str1 += str2;

    cout << "str1 = " << str1 << endl;


    string str3 = "I";
    str3.append(" love");
    cout << "str3 = " << str3 << endl;


    str3.append("game abcde", 4);
    cout << "str3 = " << str3 << endl;

    str3.append(str2);
	
    cout << "str3 = " << str3 << endl;

    //str3.append(str2, 0, 3);//ֻ��ȡ��LOL
    str3.append(str2, 4, 3);//ֵ��ȡ����DNF,����2:���Ŀ�ʼ��ȡ ����3:��ȡ�ַ�����    
    cout << "str3 = " << str3 << endl;
	
	
}

int main(int argc, char* argv[])
{
    test01();


	return 0;
}