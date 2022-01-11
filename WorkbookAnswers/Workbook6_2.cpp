#include <iostream> 
#include <iomanip>
using namespace std;

int sumDigits(long n)
{
	int sum = 0;
	int j = 10;
	while (n != 0)
	{
		sum += n % j;
		n /= j;

	}
	return sum;
}

int main() {
	cout << "Enter the number: ";
	int num;
	cin >> num;

	cout << sumDigits(num);

}