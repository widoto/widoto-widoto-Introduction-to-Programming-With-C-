#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;
//¿©±âµµ ABS..........


int main()
{
	cout << "Enter the circle's center x-, y-coordinates, and radius: ";
	double a;
	double b;
	double c;
	cin >> a >> b >> c;
	cout << "Enter the circle2's center x-,y-coordinates, and radius: ";
	double aa;
	double bb;
	double cc;
	cin >> aa >> bb >> cc;
	double length = pow((a - aa)*(a - aa) + (b - bb)*(b - bb), 0.5);
	double radius = c - cc;
	double radius2 = c + cc;

	if (radius < 0)
		radius = radius * (-1);

	if (radius >= length)
	{
		cout << "circle2 is inside circle1";
	}

	if (radius2 > length && radius < length)
	{
		cout << "circle2 overlap circle1";
	}


	if (radius2 < length)
	{
		cout << "circle2 doesnot overlap circle1";
	}
	return 0;
}