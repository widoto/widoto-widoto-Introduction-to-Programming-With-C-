#include <iostream> 
#include <string>
using namespace std;

bool isAnagram(const string& s1, const string& s2)
{
	string s3 = s2;

	if (s1.length() != s2.length())
		return false;

	else
	{
		for (int i = 0; i < s1.length(); i++)
		{
			for (int j = 0; j < s3.length(); j++)
			{
				if (s1[i] == s3[j])
				{
					s3.erase(j, 1);
					break;
				}
			}
		}

		return s3.empty();
	}

}

int main()
{
	cout << "Enter a string s1: ";
	string s1;
	cin >> s1;
	cout << "Enter a string s1: ";
	string s2;
	cin >> s2;


	if (isAnagram(s1, s2))
	{
		cout << s1 << " and " << s2 << " are anagrams";
	}

	else
		cout << s1 << " and " << s2 << " are not anagrams";

}