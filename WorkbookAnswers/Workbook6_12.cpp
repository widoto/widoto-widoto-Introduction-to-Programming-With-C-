#include <iostream> 
#include <ctime>
#include <iomanip>
using namespace std;

double tsum(int i)
{
	double bunmo = 2;
	double bunja = 1;
	double sum = 0;
	for (int j = 0; j < i; j++)
	{
		sum += bunja / bunmo;
		bunja += 1;
		bunmo += 1;
	}

	return sum;
}
int main() {

	cout << left;
	cout << setw(10) << "i" << setw(10) << "m(i)" << endl;
	for (int z = 1; z <= 20; z++)
	{
		cout << setw(10) << z << setw(10) << tsum(z) << endl;
	}

}