#include <iostream> 
#include <string>
using namespace std;


int main()

{
	string major;
	cout << "Enter a major: ";
	getline(cin, major);

	cout << "He is a " << major;

	return 0;
}