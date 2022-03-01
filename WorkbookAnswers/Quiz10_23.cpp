#include <iostream>
#include <string>

using namespace std;

class A {
public:
	A()
	{};
	string s("abc");
};


int main()
{
	A a;
	cout << a.s << endl;

}