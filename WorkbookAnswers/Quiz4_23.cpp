#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;


int main()

{
	cout << setw(10) << "C++" << setw(6) << 101 << endl;
	cout << setw(8) << "Java" << setw(5) << 101 << endl;
	cout << setw(6) << "HTML" << setw(4) << 101 << endl;

	double number = 93123.1234567;
	cout << setw(10) << setprecision(5) << number << endl;
	cout << setw(10) << setprecision(4) << number << endl;
	cout << setw(10) << setprecision(3) << number << endl;
	cout << setw(10) << setprecision(8) << number << endl;

	double monthlyPayment = 1345.4567;
	double totalPayment = 866.887234;

	cout << setprecision(7);
	cout << monthlyPayment << endl;
	cout << totalPayment << endl;

	cout << fixed << setprecision(2);
	cout << setw(8) << monthlyPayment << endl;
	cout << setw(8) << totalPayment << endl;

	cout << right;
	cout << setw(6) << 21.23 << endl;
	cout << setw(6) << 51.34 << endl;

	cout << left;
	cout << setw(6) << 21.23 << endl;
	cout << setw(6) << 51.34 << endl;

	return 0;
}