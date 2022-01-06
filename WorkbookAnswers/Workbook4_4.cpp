#include <iostream> 
#include<cmath>
#include <string>
using namespace std;


int main()

{
	const double PI = 3.141592;
	double length = 0;
	cout << "Enter the side : ";
	cin >> length;

	double s = (6 * length *length) / (4 * tan(PI / 6));
	cout << "The area of the hexagonis " << s;
	return 0;
}