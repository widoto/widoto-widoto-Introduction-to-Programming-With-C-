#include <iostream> 
using namespace std;

const double PI = 3.14159;

double getArea(double radius)
{
	return radius * radius*PI;
}

void displayArea(double radius)
{
	cout << getArea(radius) << endl;

}

int main()
{
	double r1 = 1;
	double r2 = 10;
	cout << getArea(r1) << endl;
	displayArea(r2);
}