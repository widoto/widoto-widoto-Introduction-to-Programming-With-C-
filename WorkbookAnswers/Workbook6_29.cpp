#include<iomanip>
#include<string>

using namespace std;

int sumOfOddPlaces(int n)
{
	int sum = 0;
	do
	{
		sum += n % 10;
		n /= 100;
	} while (n != 0);

	return sum;
}

int main()
{

	cout << "Enter the number: ";
	int number;
	cin >> number;
	cout << sumOfOddPlaces(number);

}