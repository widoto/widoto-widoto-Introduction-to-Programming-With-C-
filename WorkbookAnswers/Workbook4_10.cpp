#include <iostream> 
#include<cmath>
#include<cctype>
#include <string>
using namespace std;


int main()

{
	cout << "Enter the letter : ";
	char a = 0;
	cin >> a;
	double b = toupper(a);
	if ((b == 'A') || (b == 'E') || (b == 'I') || (b == 'O') || (b == 'U'))
	{
		cout << a << " is a vowel";

	}

	else
	{
		if (b >= 'A' && b <= 'Z')
			cout << a << "is a consonant";

		else
			cout << a << " is an invalid input";


	}

}