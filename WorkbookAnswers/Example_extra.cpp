#include <cstring> //C++�� ���
#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "append �Լ� ����: �׳� �ڲǹ��Ͽ� �߰�" << endl;
	string s1("Welcome");
	s1.append(" to C++");
	cout << s1 << endl;

	string s2("Welcome");
	s2.append(" to C++ and C++", 0, 5);
	cout << s2 << endl;

	string s3("Welcome");
	s3.append(" to C++ and C++", 5);
	cout << s3 << endl;

	string s4("Welcome");
	s4.append(4, 'G');
	cout << s4 << endl;

	cout << "assign �Լ�: ������� ��ü��Ű�� ��" << endl;
	string s5("Welcome");
	s5.assign("Dallas");
	cout << s5 << endl;

	string s6("Welcome");
	s6.assign("Dallas, Texos", 0, 5);
	cout << s6 << endl;

	string s7("Welcome");
	s7.assign("Dallas, Texos", 5);
	cout << s7 << endl;

	string s8("Welcome");
	s8.assign(4, 'G');
	cout << s8 << endl;

	cout << "at, erase,clear,empty �Լ���: " << endl;
	string s9("Welcome");
	cout << s9.at(3) << endl;
	cout << s9.erase(2, 3) << endl;
	s9.clear();
	cout << s9.empty();

	cout << "����, ���ڿ� ��ȯ �Լ���: " << endl;
	string s10("Welcome");
	cout << s10.length() << endl;
	cout << s10.size() << endl;
	cout << s10.capacity() << endl;

	cout << "compare, ���ڿ� ���ĺ� ũ�� ���ϴ°�" << endl;
	string s11("Welcome");
	string s12("Welcomf");

	cout << s11.compare(s12) << endl;

	cout << "�κй��ڿ� ���ϱ�, at�� �����" << endl;
	string s13("Welcome");
	cout << s13.substr(0, 1) << endl;
	cout << s13.substr(3) << endl;
	cout << s13.substr(3, 3) << endl;

	cout << "�ϳ��� ���ڳ� �κй��ڿ��� ����ִ��� �˻�" << endl;
	string s14("Welcometo c++ world");
	cout << s14.find("co") << endl;
	cout << s14.find("co", 6) << endl;
	cout << s14.find("o") << endl;
	cout << s14.find("o", 6) << endl;

	cout << "���ڿ� ���԰� ��ü" << endl;
	string s15("Welcome to HTML");
	s1.insert(11, "heuhey");
	cout << s15 << endl;

	string s16("AA");
	s16.insert(1, 4, 'b');
	cout << s16 << endl;

	string s17("Welcome to html");
	s17.replace(11, 4, "C++");
	cout << s17 << endl;

	return 0;
}