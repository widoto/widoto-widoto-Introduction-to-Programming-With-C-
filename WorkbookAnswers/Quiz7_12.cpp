#include <iostream> 
using namespace std;

void m(int x, int y[])
{
	x = 3;
	y[0] = 3;
}

int main()
{
	int number = 0;
	int numbers[1];

	m(number, numbers);

	cout << number << " " << numbers[0];

	return 0;


}