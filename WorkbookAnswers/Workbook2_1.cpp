//¼·¾¾¸¦ È­¾¾·Î º¯È¯ÇÏ´Â ÇÁ·Î±×·¥
#include <iostream>
using namespace std;

int main()
{
	double celsius;
	cout << "Enter a degree in Celsius: ";
	cin >> celsius;

	double fahrenheit = (9.0 / 5)* celsius + 32;
	cout << celsius << " Celsius is " << fahrenheit << " Farenheit";
	return 0;
}