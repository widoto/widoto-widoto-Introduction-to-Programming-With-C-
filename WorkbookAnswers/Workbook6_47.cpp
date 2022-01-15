#include <iostream> 
#include <string>
#include <cctype>

using namespace std;


int getNumber(char uppercaseLetter) {
	if (isdigit(uppercaseLetter))
	{
		return uppercaseLetter - '0';
	}
	else
	{
		if (uppercaseLetter == 'a' || uppercaseLetter == 'b' || uppercaseLetter == 'c')
			return 2;
		else if (uppercaseLetter == 'd' || uppercaseLetter == 'e' || uppercaseLetter == 'f')
			return 3;
		else if (uppercaseLetter == 'g' || uppercaseLetter == 'h' || uppercaseLetter == 'i')
			return 4;
		else if (uppercaseLetter == 'j' || uppercaseLetter == 'k' || uppercaseLetter == 'l')
			return 5;
		else if (uppercaseLetter == 'm' || uppercaseLetter == 'n' || uppercaseLetter == 'o')
			return 6;
		else if (uppercaseLetter == 'p' || uppercaseLetter == 'q' || uppercaseLetter == 'r' || uppercaseLetter == 's')
			return 7;
		else if (uppercaseLetter == 't' || uppercaseLetter == 'u' || uppercaseLetter == 'v')
			return 8;
		else if (uppercaseLetter == 'w' || uppercaseLetter == 'x' || uppercaseLetter == 'y' || uppercaseLetter == 'z')
			return 9;
		else
			return 10;
	}

}



int main()
{
	string s1;
	cout << "Enter the password: ";
	getline(cin, s1);
	string s2;
	for (int i = 0; i < s1.length(); i++)
	{
		if (getNumber(s1[i]) == 10)
			s2 = s2 + '-';
		else
			s2 = s2 + to_string(getNumber(s1 = [i]));

	}
	cout << s2;
}