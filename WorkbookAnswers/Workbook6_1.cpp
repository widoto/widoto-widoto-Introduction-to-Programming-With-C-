#include <iostream> 
#include <iomanip>
using namespace std;

int getPentagonalNumber(int n)
{
	return n * (3 * n - 1) / 2;
}

int main() {

	cout << "PentagonNumber is " << endl;
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		count += 1;
		if ((count % 10) != 0)
			cout << setw(6) << getPentagonalNumber(i);
		else
			cout << setw(6) << getPentagonalNumber(i) << endl;

	}

}