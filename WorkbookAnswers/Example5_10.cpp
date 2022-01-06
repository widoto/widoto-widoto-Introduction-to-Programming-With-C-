#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	//두 정수를입력
	cout << "Enter t=first integer: ";
	int n1;
	cin >> n1;

	cout << "Enter second integer : ";
	int n2;
	cin >> n2;

	int gcd = 1;
	int k = 2;
	while (k <= n1 && k <= n2)
	{
		if (n1%k == 0 && n2%k == 0)
			gcd = k;
		k++;
	}

	cout << "Thegreatest common divisorfor" << n1 << " and " << n2 << " is " << gcd << endl;

	return 0;

}