#include <iostream> 
#include <string>
#include <cctype>

using namespace std;


int main()
{

	cout << "Enter the first 12 digits of an ISBN-13 as a string: ";
	string s1;
	getline(cin, s1);
	int i = 0;
	int sum1 = 0;
	while (i != 12)
	{
		sum1 = sum1 + (s1[i] - '0');
		i += 2;
	}

	int j = 1;
	int sum2 = 0;
	while (j != 13)
	{
		sum2 = sum2 + 3 * (s1[j] - '0');
		j += 2;
	}

	double d13 = 10 - (sum1 + sum2) % 10;
	string s2 = s1 + '0';
	if (s1.length() == 12)
	{
		if (d13 == 10)
			cout << "The ISBN-13 number is " << s2;
		else
			cout << "The ISBN-13 number is bingo";
	}
	else
		cout << "invalid input";

}