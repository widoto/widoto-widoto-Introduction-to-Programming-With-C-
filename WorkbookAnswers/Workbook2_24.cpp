#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	cout << "Enter an amount in double,for example 11.56: ";
	int amount;
	cin >> amount;

	int numberofdollars = amount / 100;
	int cent = amount % 100;
	cout << " dollars: " << numberofdollars << " cents: " << cent;
}