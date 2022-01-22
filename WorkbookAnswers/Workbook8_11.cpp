#include <iostream> 
#include <string>
using namespace std;

int main()
{
	cout << "Enter a number between 0 and 511: ";
	int number;
	cin >> number;

	int matrix[9] = { 0,0,0,0,0,0,0,0,0 };
	int i = 8;
	while (number != 0)
	{
		matrix[i] = number % 2;
		number = number / 2;
		i -= 1;
	}

	for (int i = 0; i < 9; i++)
	{
		if (matrix[i] == 0)
			cout << "H ";
		else
			cout << "T ";
		if (i == 2 || i == 5)
			cout << endl;
	}
}