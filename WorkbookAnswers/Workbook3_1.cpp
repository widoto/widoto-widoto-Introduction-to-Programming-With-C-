#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	const double EPSILON = 1E-14;
	cout << "Enter a,b,c: ";
	cin >> a >> b >> c;

	double root1 = (-b + pow(b*b - 4 * a*c, 0.5)) / 2 * a;
	double root2 = (-b - pow(b*b - 4 * a*c, 0.5)) / 2 * a;
	double panbael = b * b - 4 * a*c;

	if (panbael > 0)
		cout << "The roots are " << root1 << " and " << root2;

	else if (abs(panbael) < EPSILON)
		//실수에 등호를 즉 double에 등호쓸때는 꼭꼭 조심!
		cout << "The root is " << root1;

	else
		cout << "The equation has no real roots";

	return 0;
}