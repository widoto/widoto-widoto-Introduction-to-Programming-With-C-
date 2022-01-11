#include <iostream> 
using namespace std;

void f(double &p, int &c)
{
	p += 2;
	c += 2;
}

int main()
{
	int count = 2;
	double x = 10;
	double y = 10;
	f(x, count);
	f(y, count);

	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	cout << "count is " << count << endl;

	return 0;
}