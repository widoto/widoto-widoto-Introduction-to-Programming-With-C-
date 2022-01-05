#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Enter year: (e.g., 2012): ";
	int year;
	cin >> year;
	cout << "Enter month: 1-14: ";
	int m;
	cin >> m;
	cout << "Enter the day of the moth: 1-31: ";
	int q;
	cin >> q;
	if (m == 1)
	{
		m = 13;
		year = year - 1;
	}


	if (m == 2)
	{
		year = year - 1;
		m = 14;

	}

	int j = year / 100;
	int k = year % 100;
	int next = (q + 26 * (m + 1)*0.1 + k + k * 0.25 + j * 0.25 + 5 * j);
	int h = next % 7;
	cout << h;
	switch (h)
	{
	case 0:
		cout << "Day of the week is Saturday";
		break;
	case 1:
		cout << "Day of the week is Sunday";
		break;

	case 2:
		cout << "Day of the week is Monday";
		break;
	case 3:
		cout << "Day of the week is Thuesday";
		break;
	case 4:
		cout << "Day of the week is Wednesday";
		break;
	case 5:
		cout << "Day of the week is Thursday";
		break;
	case 6:
		cout << "Day of the week is Friday";
		break;

	}

	return 0;
}