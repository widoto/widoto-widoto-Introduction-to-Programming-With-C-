#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	double investmentamount = 0;
	double annualinterest = 0;
	int numberofyears = 0;
	cout << "Enter investment amount: ";
	cin >> investmentamount;
	cout << "Enter annualinterest ratein percentage: ";
	cin >> annualinterest;
	cout << "Enter number of years: ";
	cin >> numberofyears;
	double futureInvestmentValue = investmentamount * pow((1 + annualinterest / 12 / 100), numberofyears * 12);
	cout << "Accumulated valueis :" << futureInvestmentValue;
	return 0;


}