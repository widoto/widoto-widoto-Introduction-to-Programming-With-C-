#include <iostream> 
#include <cmath>
#include <string>
using namespace std;

void displaySortedNumbers(double num1, double num2, double num3)
{
	int first;
	int second;
	int third;

	if (num1 > num2)
	{
		if (num1 > num3)
		{
			first = num1;
			if (num2 > num3)
			{
				second = num2;
				third = num3;
			}

		}
		else
		{
			first = num3;
			second = num1;
			third = num2;
		}
	}

	else
	{
		if (num2 > num3)
		{
			first = num2;
			if (num1 > num3)
			{
				second = num1;
				third = num3;
			}
		}
		else
		{
			first = num3;
			second = num2;
			third = num1;
		}
	}

	cout << first << ", " << second << ", " << third;

}

int main() {
	cout << "Enter the number1: ";
	int num1;
	cin >> num1;

	cout << "Enter the number2: ";
	int num2;
	cin >> num2;

	cout << "Enter the number3: ";
	int num3;
	cin >> num3;

	displaySortedNumbers(num1, num2, num3);

}