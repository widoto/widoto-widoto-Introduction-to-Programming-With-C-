#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	double distance = 0;
	cout << "Enter the driving distance: ";
	cin >> distance;
	double gallon = 0;
	cout << "Enter milesper gallon: ";
	cin >> gallon;
	double price = 0;
	cout << "Enter price per gallon: ";
	cin >> price;
	double cost = 0;
	cost = distance / gallon * price;
	cout << "The cost of driving is $" << cost;

	return 0;


}