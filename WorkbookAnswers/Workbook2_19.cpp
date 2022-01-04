#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	double x1 = 0;
	double x2 = 0;
	double x3 = 0;
	double y1 = 0;
	double y2 = 0;
	double y3 = 0;

	cout << "Enter the three points for a triangle: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double side1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	double side2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	double side3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double s = (side1 + side2 + side3) / 2;
	double area = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	cout << "The area ofthe triangle is : " << area;

}