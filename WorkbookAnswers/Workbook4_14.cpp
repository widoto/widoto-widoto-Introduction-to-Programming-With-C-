#include <iostream> 
#include<cmath>
#include<cctype>
#include <string>
using namespace std;


int main()

{
	int a;
	cout << "Enter a decimal value(0 t0 15): ";
	cin >> a;
	if ((a >= 0) && (a <= 15))
	{
		if ((a >= 0) && (a < 10))
			cout << "The hex value is " << 5;

		else
		{
			char i = a - 10 + 'A';
			cout << "The hex value is " << i;

		}

	}

	else
		cout << a << " is an invalid input";