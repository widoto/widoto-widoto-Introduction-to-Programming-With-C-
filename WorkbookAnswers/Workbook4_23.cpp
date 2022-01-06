#include <iostream> 
#include <string>
using namespace std;


int main()

{
	string major;
	cout << "Enter a SSN: ";
	getline(cin, major);

	if (major.size() == 11)
	{
		if ((major[3] == '-') && (major[6] == '-'))
		{
			if (((major[0] - 48 >= 0) && (major[0] - 48 <= 9)) && ((major[1] - 48 >= 0) && (major[1] - 48 <= 9)) && ((major[2] - 48 >= 0) && (major[2] - 48 <= 9)) && ((major[4] - 48 >= 0) && (major[4] - 48 <= 9)) && ((major[5] - 48 >= 0) && (major[5] - 48 <= 9)) && ((major[7] - 48 >= 0) && (major[7] - 48 <= 9))
				&& ((major[8] - 48 >= 0) && (major[8] - 48 <= 9)) && ((major[9] - 48 >= 0) && (major[9] - 48 <= 9)) && ((major[10] - 48 >= 0) && (major[10] - 48 <= 9)))
			{
				cout << major << " is valid social security number.";
			}

			else
				cout << major << " is an invalid social security number.";
		}

		else
			cout << major << " is an invalid social security number.";
	}

	else
		cout << major << " is an invalid social security number.";

	return 0;
}