#include <iostream> 
#include <cmath>
#include<iomanip>

using namespace std;

double m(int i)
{
	double bunmo = 1;
	int bunja = 0;
	double sum = 0;
	do {
		sum += pow(-1, bunja) / bunmo;
		bunmo += 2;
		bunja += 1;
	} while (bunmo != 2 * i - 1 + 2);

	return 4 * sum;
}

int main()
{
	cout << left;
	cout << setw(14) << "i" << setw(14) << "m(i)" << endl;
	int j = 1;
	while (j != 1001)
	{
		cout << left;
		cout << setw(14) << j << setw(14) << fixed << setprecision(4) << m(j) << endl;
		j += 100;
	}
	return 0;
}