#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	double monthly_saving = 0;
	cout << "Enter the monthly saving account: ";
	cin >> monthly_saving;
	int i;
	double first_month = monthly_saving * (1 + 0.00417);
	double final_money = 0;
	for (i = 0; i < 6; i++)
	{
		if (i == 0)
			final_money = first_month;


		else
			final_money = (monthly_saving + final_money)*(1 + 0.00417);
	}
	cout << "After the sixth month, the account value is $" << final_money;
	return 0;

}