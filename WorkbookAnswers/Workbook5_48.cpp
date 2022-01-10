#include <iostream> 
#include <string>
#include <cctype>
using namespace std;


int main()
{
	cout << "Enter a string: " << endl;
	string one;
	getline(cin, one);
	int count = 0;
	for (int i = 0; i < one.length(); i++)
	{
		if (isupper(one[i]))
			count += 1;
	}

	cout << "The number of uppercase letters is " << count;
}