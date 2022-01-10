#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	int amount;
	int year;

	cout << "Lost Amount: ";
	cin >> amount;

	cout << "Number of Years: ";
	cin >> year;
	double monthlyInterestRate = 5;

	cout << "Interest Rate      Monthly Payment      Total Payment" << endl;
	while (monthlyInterestRate <= 8)
	{
		double monthlyPayment = amount * monthlyInterestRate / (1 - 1 / pow(1 + monthlyInterestRate, year * 12));
		double totalPayment = monthlyPayment * year * 12;

		monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;
		totalPayment = static_cast<int>(totalPayment * 100) / 100.0;

		cout << fixed << setprecision(3) << monthlyInterestRate << "%          " << fixed << setprecision(2) <<
			monthlyPayment << "%          " << fixed << setprecision(2) << totalPayment << endl;

		monthlyInterestRate += 0.125;
	}
	return 0;
}