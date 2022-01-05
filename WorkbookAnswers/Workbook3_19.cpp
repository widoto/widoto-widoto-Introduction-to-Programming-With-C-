#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "Enter a point with two coordinates: : ";
	int a;
	int b;
	cin >> a >> b;
	if (pow(a*a + b * b, 0.5) <= 10)
	{
		cout << "point ( " << a << ", " << b << " ) is in the circle.";

	}
	else
		cout << "point ( " << a << ", " << b << " ) is not in the circle.";


	return 0;
}