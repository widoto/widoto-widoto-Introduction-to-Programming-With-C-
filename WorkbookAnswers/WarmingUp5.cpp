#include <iostream> 
#include <iomanip>
using namespace std;


int main() {

	cout << "Enter the number of lines: ";
	int numberOfLines;
	cin >> numberOfLines;

	if (numberOfLines < 1 || numberOfLines >15)
	{
		cout << "You must enter a number from 1 to 15";
		return 0;
	}

	for (int row = 1; row <= numberOfLines; row++)
	{
		for (int column = 1; column <= numberOfLines - row; column++)
			cout << "   ";
		for (int num = row; num >= 1; num--)
			cout << setw(3) << num;
		for (int num = 2; num <= row; num++)
			cout << setw(3) << num;

		cout << endl;

	}

	return 0;

}