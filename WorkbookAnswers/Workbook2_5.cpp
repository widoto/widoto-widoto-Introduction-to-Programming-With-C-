#include <iostream>

using namespace std;

int main()
{
	double subtotal = 0;
	double gratuity_rate = 0;

	cout << "Enter the subtotal and gratuity rate: ";
	cin >> subtotal >> gratuity_rate;
	double gratuity = subtotal * gratuity_rate / 100;
	double total = subtotal + gratuity;
	cout << "The gratuity is $" << gratuity << " and total is $" << total;

	return 0;
}