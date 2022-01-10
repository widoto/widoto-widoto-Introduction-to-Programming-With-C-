#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	cout << "Enter the initial deposit amount : ";
	int money;
	cin >> money;
	cout << "Enter annual percentage yield : ";
	double yija;
	cin >> yija;
	cout << "Enter maturity period (number of months) : ";
	int month;
	cin >> month;
	double monthlyYija = yija / 100 / 12;
	double sum = money;
	cout << left;
	cout << setw(7) << "Month" << setw(8) << "CD value" << endl;
	for (int i = 1; i <= month; i++)
	{
		sum = (sum)*(1 + monthlyYija);
		cout << left;
		cout << setw(7) << i << setw(8) << sum << endl;
	}

	return 0;