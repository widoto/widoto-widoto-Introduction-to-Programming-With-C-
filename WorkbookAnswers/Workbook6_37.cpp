#include <iostream> 
#include <string>

using namespace std;


int getDigit(int number)
{
	if (number / 10 == 1)
		//´õÇÏ°í
	{
		return (number % 10 + number / 10);
	}
	else
		return number;
}

int sumOfDoubleEvenPlace(string cardNumber)
{
	int i = 1;
	int num = 0;
	int num2 = atoi(cardNumber.c_str);
	while (num2 != 0)
	{
		num2 = num2 / 10;
		int num3 = num2 % 10;
		num += getDigit(num3);
		num2 = num2 / 10;

	}

	return num;
}

int sumOfOddPlace(string cardNumber)
{
	int j = 0;
	int sum = 0;
	int num = atoi(cardNumber.c_str);
	while (num != 0)
	{
		sum += num % 10;
		num /= 100;
	}
	return sum;
}

bool isValid(string cardNumber)
{
	if ((sumOfDoubleEvenPlace(cardNumber) + sumOfOddPlace(cardNumber)) % 10 == 0)
		return true;
	else
		return false;
}


int main()
{
	string s1;
	cout << "Enter the password: ";
	getline(cin, s1);
	cout << isValid(s1);

}