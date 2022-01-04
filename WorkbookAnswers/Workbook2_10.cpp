#include <iostream>

using namespace std;

int main()
{
	double M = 0;
	double initialTemperature = 0;
	double finalTemperature = 0;
	double Q;

	cout << "Enter the amountof water in kilograms: ";
	cin >> M;
	cout << "Enter the initial temperature: ";
	cin >> initialTemperature;
	cout << "Enter the final temperature: ";
	cin >> finalTemperature;
	Q = M * (finalTemperature - initialTemperature) * 4184;

	cout << "The energy needed is " << Q;

	return 0;
}