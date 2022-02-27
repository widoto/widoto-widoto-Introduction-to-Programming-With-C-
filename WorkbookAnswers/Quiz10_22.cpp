#include <iostream>
#include <string>

using namespace std;

class A {
public:
	A()
	{
		s = "John";
	}

	string s;
};

class B
{
public:
	B()
	{
		k = 4;
	};

	int k;
};

int main()
{
	A a;
	cout << a.s << endl;

	B b;
	cout << b.k << endl;
}