#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	double total = 0;
	cout << "Enter a number between 0 and 1000: ";
	cin >> number;
	int hundred = number / 100;
	int ten = (number % 100) / 10;
	int one = number % 100 % 10;
	total = hundred + ten + one;

	cout << "The sum of the digits is " << total;
	return 0;

}

//%�� ���� �ǿ����� �������� double�� ����Ҽ� ����.