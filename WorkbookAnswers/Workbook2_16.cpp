#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//기하학 육각형의 면적
	double length = 0;
	cout << "Enter the side: ";
	cin >> length;
	double area = 3 * pow(3, 0.5)*0.5*length* length;

	cout << "The area ofthe hexagon is " << area;
	return 0;

}