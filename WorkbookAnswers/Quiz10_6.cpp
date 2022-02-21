#include <iostream> 
#include <string>
using namespace std;


bool replaceString(string &s, const string& oldSubStr, const string& newSubStr)
{
	bool isReplaced = false;
	int currentPosition = 0;
	while (currentPosition < s.length())
	{
		int position = s.find(oldSubStr, currentPosition);
		if (position == string::npos)
			return isReplaced;
		else
		{
			s.replace(position, oldSubStr.length(), newSubStr);
			currentPosition = position + newSubStr.length();
			isReplaced = true;
		}
	}

}

int main()
{
	string s("abcdabab"), oldSubStr("ab"), newSubStr("AAA");
	replaceString(s, oldSubStr, newSubStr);
	cout << s << endl;

}