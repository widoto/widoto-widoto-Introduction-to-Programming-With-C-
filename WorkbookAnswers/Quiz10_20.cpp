#include <iostream>
using namespace std;

class A
{
public:
	A();
	double getNumber();

private:
	double number;
};

A::A()
{
	number = 1;
}

double A::getNumber()
{
	return number;
}

void printA(Const A& a)
{
	cout << "The number is " << a.getnumber() << endl;
}

int main()
{
	A myObject;
	printA(myObject);

	return 0;
}