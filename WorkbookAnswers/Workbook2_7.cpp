#include <iostream>

using namespace std;

int main()
{
	int minutes = 0;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	int years = minutes / 60 / 24 / 365;
	int days = minutes / 60 / 24 % 365;

	cout << minutes << " is approximately " << years << "years and " << days << "days";

	return 0;
}