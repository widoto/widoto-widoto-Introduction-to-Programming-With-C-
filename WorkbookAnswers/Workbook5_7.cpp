#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	int n = 0;
	const double PI = 3.1415;

	cout << "Degree             Sin             Cos" << endl;
	while (n < 361)
	{

		double sinsin = sin(n*(PI / 180));
		double coco = cos(n*(PI / 180));
		cout << setw(5) << n << "              " << fixed << setprecision(5) << sinsin << "             " << fixed << setprecision(5) << coco << endl;
		n += 10;
	}
	return 0;
}