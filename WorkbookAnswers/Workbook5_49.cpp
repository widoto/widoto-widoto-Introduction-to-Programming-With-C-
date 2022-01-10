#include <iostream> 
#include <string>
#include <cctype>

using namespace std;


int main()
{
	cout << "Enter s1: ";
	string s1;
	string s2;
	getline(cin, s1);
	cout << "Enter s2: ";
	getline(cin, s2);
	int lengthl;
	if (s1.length() < s2.length())
		lengthl = s1.length();
	else
		lengthl = s2.length();

	string s3;
	for (int i = 0; i < lengthl; i++)
	{
		if (s1[i] == s2[i])
			s3 = s3 + s1[i];

		else
			break;
	}

	if (s3.length() == 0)
		cout << s1 << " and " << s2 << " have no common prefix";
	else
		cout << "The common prefix is " << s3;


}