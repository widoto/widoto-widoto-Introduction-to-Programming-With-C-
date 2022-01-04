#include <iostream>

using namespace std;

int main()
{
	double v0 = 0;
	double v1 = 0;
	double t = 0;

	cout << "Enter v0, v1, and t : ";
	cin >> v0 >> v1 >> t;
	double sokdo = (v1 - v0) / t;

	cout << "The average acceleration is" << sokdo;

	return 0;
}