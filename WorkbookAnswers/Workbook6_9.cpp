#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

double celsiusToFahrenheit(double celsius)
{
	return (9.0 / 5)*celsius + 32;
}

double farenheitToCelsius(double fahrenheit)
{
	return (fahrenheit - 32) / 1.8;

}
int main() {
	cout << left;
	cout << setw(14) << "Celsius" << setw(14) << "Fahrenheit" << "|      " << setw(14) << "Fahrenheit" << setw(14) << "Celsius" << endl;
	double num = 40.0;
	double num2 = 120.0;
	for (int i = 0; i < 10; i++)
	{
		cout << setw(14) << num << setw(14) << celsiusToFahrenheit(num) << "|      " << setw(14) << num2 << setw(14) << fixed << setprecision(2) << farenheitToCelsius(num2) << endl;
		num -= 1;
		num2 -= 10;
	}


	return 0;

}