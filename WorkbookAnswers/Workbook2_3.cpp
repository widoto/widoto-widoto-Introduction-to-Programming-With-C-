#include <iostream>

using namespace std;

int main()
{
	double feet = 0;
	cout << "Enter a value for feet: ";
	cin >> feet;
	double meter = feet * 0.305;
	cout << feet << " feet is " << meter << " meters";

	return 0;
}