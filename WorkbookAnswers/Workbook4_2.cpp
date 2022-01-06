#include <iostream> 
#include<cmath>
#include <string>
using namespace std;


int main()

{
	const double PI = 3.141592;
	double x1, y1, x2, y2;
	cout << "Enter point 1(latitude and longtitude) in degrees: ";
	cin >> x1 >> y1;

	cout << "Enter point 2 (latitude and longitude) in degrees: ";
	cin >> x2 >> y2;

	double X1 = PI / 180 * x1;
	double Y1 = PI / 180 * y1;
	double X2 = PI / 180 * x2;
	double Y2 = PI / 180 * y2;

	double d = 6378.1 * acos(sin(X1)*sin(X2) + cos(X1)*cos(X2)*cos(Y1 - Y2));
	cout << "The distance between the twopoints is " << d << " km";

	return 0;
}