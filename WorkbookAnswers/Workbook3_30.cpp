#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;


//이것도 ABS써줘야!!!
int main()
{
	cout << "Enter weight and price for package 1: ";
	double a;
	double b;
	cin >> a >> b;
	cout << "Enter weight and price for package 2: ";
	double d;
	double e;
	cin >> d >> e;
	double weight_per_1 = b / a;
	double weight_per_2 = e / d;
	if (weight_per_1 > weight_per_2)
	{

		cout << "Package 2 has a better package";

	}


	else if (weight_per_1 < weight_per_2)
	{

		cout << "Package 1 has a better package";

	}


	else
		cout << "Two packages have the same price.";

	return 0;

}