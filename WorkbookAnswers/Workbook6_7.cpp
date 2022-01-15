#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

double futureInvestmentValue(double amount, double rate, int year)
{
	return amount * pow((1 + rate / 1200), year * 12);
}
int main() {

	cout << "The amount invested: ";
	double amount;
	cin >> amount;
	cout << "Annual interest rate: ";
	double rate;
	cin >> rate;
	cout << left;
	cout << setw(9) << "Years" << setw(9) << "Future Value" << endl;
	for (int i = 1; i <= 30; i++)
	{
		cout << left;
		cout << setw(9) << i << setw(9) << futureInvestmentValue(amount, rate, i) << endl;
	}

	return 0;

}