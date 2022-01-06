#include <iostream> 
using namespace std;


int main()

{
	int total = 0, num = 0;
	do {
		cout << "Enter an int value, " << "\nexit if the input is 0: ";
		int num;
		cin >> num;
		total += num;

	} while (num != 0);

	cout << "Total is " << total << endl;
	return 0;
}