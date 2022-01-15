#include <iostream> 
#include <string>
#include <cctype>

using namespace std;


int indexOf(const string&s1, const string& s2)
{

	for (int i = 0; i < s2.length(); i++)
	{
		string s3;
		if (s2[i] == s1[0])
		{
			int h = i;
			for (int j = 0; j < s1.length(); j++)
			{

				if (s1[j] == s2[h])
				{
					h += 1;
					s3 = s3 + s1[j];

				}

			}

			if (s3.length() == s1.length())

				return i;

		}



	}

	return -1;
}