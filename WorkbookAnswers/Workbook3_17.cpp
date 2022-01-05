#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	const double EPSILON = 1E-14
		double temperature = 0;
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> temperature;
	double speed = 0;
	cout << "Enter the wind speed in mile sper hour: ";
	cin >> speed;
	if (-58 < temperature && temperature < 41 && abs(speed - 2 >= EPSILON))
	{
		double chill_tem = 35.74 + 0.6215* temperature - 35.75 *pow(speed, 0.16) + 0.4275*temperature*pow(speed, 0.16);
		cout << "The wind chill index is :" << chill_tem;
	}

	else
		cout << "입력 다시하세요";


	return 0;

}