#include <iostream> 
#include <string>
using namespace std;


int main()

{
	string major;
	cout << "Enter a major: ";
	getline(cin, major);

	if (major[0] == 'M')
	{
		if (major[1] == '1')
			cout << "Mathmatics freshman";
		else if (major[1] == '2')
			cout << "Mathmatics sophomore";
		else if (major[1] == '3')
			cout << "Mathmatics junior";
		else if (major[1] == '4')
			cout << "Mathmatics senior";

		else
			cout << "Invalid status code";
	}

	else if (major[0] == 'C')
	{
		if (major[1] == '1')
			cout << "Computer Science freshman";
		else if (major[1] == '2')
			cout << "Computer Science sophomore";
		else if (major[1] == '3')
			cout << "Computer Science junior";
		else if (major[1] == '4')
			cout << "Computer Science senior";

		else
			cout << "Invalid status code";
	}

	else if (major[0] == 'I')
	{
		if (major[1] == '1')
			cout << "Information technology freshman";
		else if (major[1] == '2')
			cout << "Information technology sophomore";
		else if (major[1] == '3')
			cout << "Information technology junior";
		else if (major[1] == '4')
			cout << "Information technology senior";

		else
			cout << "Invalid status code";
	}

	else
		cout << "Invalid major code";

	return 0;
}