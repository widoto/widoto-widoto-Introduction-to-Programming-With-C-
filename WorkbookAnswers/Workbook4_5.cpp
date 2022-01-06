#include <iostream> 
#include<cmath>
#include <string>
using namespace std;


int main()

{
	const double PI = 3.141592;
	int sides = 0;
	cout << "Enter the number of sides: ";
	cin >> sides;

	double length = 0;
	cout << "Enter the side : ";
	cin >> length;

	double s = (sides * length *length) / (4 * tan(PI / sides));
	cout << "The area of the hexagonis " << s;
	return 0;
}