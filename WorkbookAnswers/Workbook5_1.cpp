#include <iostream> 
using namespace std;


int main()
{
	bool flag = true;
	int negatives = 0;
	int positives = 0;
	double total = 0;


	cout << "Enter an integer, the input ends if it is 0: ";

	do {
		int number;
		cin >> number;
		if (number > 0)
		{
			positives += 1;
			total += number;
		}

		if (number < 0)
		{
			negatives += 1;
			total += number;
		}


	} while (getc(stdin) == ' ');


	cout << "The number of positives is: " << positives << endl;
	cout << "The number of negatives is: " << negatives << endl;
	cout << "The total is " << total << endl;
	cout << "The average is " << total / (positives + negatives);
	return 0;
}