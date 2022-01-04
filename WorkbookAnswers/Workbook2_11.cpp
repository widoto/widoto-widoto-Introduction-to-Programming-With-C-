#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter yearly interest rate, for example 8.25: ";
	double annualInterstRate;
	cin >> annualInterstRate;

	double monthlyInterestRate = annualInterstRate / 1200;

	cout << "Enter number of years as an integer, for example 5: ";
	int numberOfYears;
	cin >> numberOfYears;

	cout << "Enterloanamount,for example 120000.95: ";
	double loanAmount;
	cin >> loanAmount;

	double monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow(1 + monthlyInterestRate, numberOfYears * 12));
	double totalPayment = monthlyPayment * numberOfYears * 12;

	monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;
	totalPayment = static_cast<int>(totalPayment * 100) / 100.0;

	cout << "Themonthly payment is " << monthlyPayment << endl << "The total payment is " << totalPayment << endl;

	return 0;
}