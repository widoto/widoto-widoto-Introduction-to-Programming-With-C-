#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;



int main()
{
	cout << "Enter the coordinates for two points: ";
	double a;
	double b;
	double c;
	double d;
	cin >> a >> b >> c >> d;
	double m = (a - c) / (b - d);
	double e = b - m * a;

	if (b == 0)
	{
		if (m == 0)
			cout << "방정식이 만들어지지 않아요.";

		else if (m == 1)
			cout << "The line equation for two points is y = x";


		else
			cout << "The line equation for two points is y = " << m << "x";
	}


	else
	{
		if (m == 0)
			cout << "The line equation for two points is y = " << b;


		else if (m == 1)
			cout << "The line equation for two points is y = x + " << b;

		else
			cout << "The line equation for two points is y = " << m << "x + " << b;

	}



	return 0;

}