#include <iostream> 
#include <iomanip>
using namespace std;

void t1();
void t2();

int main()
{

	t1();
	t1();
	return 0;

}

int y;

void t1()
{
	int x = 1;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	x++;
	y++;
}

void t2()
{
	int x = 1;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;

}