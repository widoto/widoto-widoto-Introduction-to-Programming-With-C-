#include <iostream>
#include <ctime>
using namespace std;



int main()
{
	//구매 대금 입력
	double purchaseAmount;
	cout << "Enter purchase amount: ";
	cin >> purchaseAmount;

	double tax = purchaseAmount * 0.06;
	cout << "Sales tax is " << static_cast<int>(tax * 100) / 100.0;


	return 0;
}