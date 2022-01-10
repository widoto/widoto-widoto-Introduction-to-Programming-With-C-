#include <iostream> 
#include <string>

using namespace std;


int main()
{

	cout << "Enter the password: ";
	string s1;
	getline(cin, s1);
	int count = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if ((s1[i] - '0') >= 0 && (s1[i] - '0') <= 9)
			count += 1;
	}
	if (s1.length() >= 8)
	{
		if (count >= 2)
		{
			for (int j = 0; j < 8; j++)
			{
				if (((s1[j] - '0') >= 0 && (s1[j] - '0') <= 9) || ((s1[j] - 'A') >= 0 && (s1[j] - 'A') <= 25) || ((s1[j] - 'a') >= 0 && (s1[j] - 'a') <= 25))
					continue;
				else
				{
					cout << "invalid password";
					break;
				}
			}
			cout << "valid password";
		}
		else
			cout << "invalid password";
	}

	else
		cout << "invalid password";

}