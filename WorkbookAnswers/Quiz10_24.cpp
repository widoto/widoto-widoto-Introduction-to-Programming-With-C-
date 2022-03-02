#include <iostream>
#include <string>

using namespace std;

class A {
public:
	A()
	{};

private:
	string s;
};


int main()
{
	A a;
	cout << a.s << endl;

}