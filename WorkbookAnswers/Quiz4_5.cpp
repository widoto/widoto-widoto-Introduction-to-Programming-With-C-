#include <iostream
using namespace std;


int main()
{
	cout << "Enter a lowercase letter: ";
	char lowercaseLetter;
	cin >> lowercaseLetter;



	cout << "The corresponding uppercase letter is " << static_cast<int>(lowercaseLetter) << endl;

	cout << "Enter a lowarcase letter: ";
	int lowarcaseLetter;
	cin >> lowarcaseLetter;

	cout << "The corresponding uppercase letter is " << static_cast<char>(lowarcaseLetter) << endl;



	return 0;
}