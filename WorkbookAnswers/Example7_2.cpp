#include <iostream> 
using namespace std;

int main()
{
	bool isCovered[99];
	int number;

	for (int i = 0; i < 99; i++)
		isCovered[i] = false;

	cin >> number;
	while (number != 0)
	{
		isCovered[number - 1] = true;
		cin >> number;
	}

	bool allCovered = true;
	for (int i = 0; i < 99; i++)
		if (!isCovered[i])
		{
			allCovered = false;
			break;
		}

	if (allCovered)
		cout << "The tickets cover all numbers" << endl;
	else
		cout << "The tickets don't cover all numbers" << endl;

	return 0;

}