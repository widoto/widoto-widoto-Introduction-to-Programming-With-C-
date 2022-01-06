#include <iostream> 
#include<cmath>
#include<cctype>
#include <string>
using namespace std;


int main()

{
	cout << "Enter a character: ";
	char a;
	cin >> a;
	int i = static_cast<char>('A' + (a - 65));
	cout << "The ASCII code for the character is " << i;



}