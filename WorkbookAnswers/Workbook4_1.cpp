#include <iostream> 
#include<cmath>
#include <string>
using namespace std;


int main()

{
	const double PI = 3.141592;
	double length = 0;
	cout << "Enter the length from the center to a vertex: ";
	cin >> length;

	double s = (5 * length*sin(PI / 5) * length * sin(PI / 5)) / tan(PI / 5);
	cout << "The area of thepentagon is " << round(s * 100) / 100;

	return 0;
}