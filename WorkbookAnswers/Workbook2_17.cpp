#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	double temperature = 0;
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> temperature;
	double speed = 0;
	cout << "Enter the wind speed in mile sper hour: ";
	cin >> speed;
	double chill_tem = 35.74 + 0.6215* temperature - 35.75 *pow(speed, 0.16) + 0.4275*temperature*pow(speed, 0.16);
	cout << "The wind chill index is :" << chill_tem;
	return 0;

}