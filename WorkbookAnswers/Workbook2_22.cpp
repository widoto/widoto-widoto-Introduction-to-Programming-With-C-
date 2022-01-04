#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	double balence = 0;
	double interest = 0;
	cout << "Enter balance and interest rate (e.g, 3 for 3%): ";
	cin >> balence >> interest;
	double month_interest = balence * (interest / 1200);
	cout << " The interest is " << month_interest;
	return 0;


}