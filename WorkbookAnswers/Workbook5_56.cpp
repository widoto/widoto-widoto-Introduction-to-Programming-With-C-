#include <iostream> 
#include <cmath>

using namespace std;


int main()
{

	cout << "Enter the number of the sides: ";
	int sides;
	cin >> sides;

	cout << "Enter the radius of the bounding circle: ";
	double radius;
	cin >> radius;

	cout << "The coordinates of the points on the polygon are " << endl;
	double gackdo = 360.0 / sides;
	for (int i = 0; i < sides; i++)
	{
		double hgacdo = (gackdo * i) / 180.0*3.141592;
		cout << "(" << radius * cos(hgacdo) << "," << radius * sin(hgacdo) << ")" << endl;

	}


}