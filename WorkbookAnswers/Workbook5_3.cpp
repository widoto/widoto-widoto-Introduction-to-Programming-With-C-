#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	int n = 1;
	cout << "Kilograms        Pounds" << endl;
	while (n < 200)
	{
		double pounds = n * 2.2;
		cout << setw(4) << n << "              " << setw(5) << pounds << endl;
		n += 2;
	}
	return 0;
}