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
	if (b == 'A')
		cout << "The numeric value for grade " << a << " is 4";

	else if (b == 'B')
		cout << "The numeric value for grade " << a << " is 3";
	else if (b == 'C')
		cout << "The numeric value for grade " << a << " is 2";
	if (b == 'D')
		cout << "The numeric value for grade " << a << " is 1";
	if (b == 'E')
		cout << "The numeric value for grade " << a << " is 0";
	else
		cout << a << " is an invalid grade";


}