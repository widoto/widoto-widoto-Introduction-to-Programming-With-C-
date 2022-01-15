#include <ctime>
#include<iomanip>
#include<string>
#include<ctime>

using namespace std;

void suffle(string s1)
{
	srand(time(0));

	for (int i = 0; i < s1.length(); i++)
	{
		int num = rand() % s1.length();
		char temp = s1[i];
		s1[i] = s1[num];
		s1[num] = temp;
	}

	cout << s1;

}

int main()
{

	cout << "Enter the string: ";
	string s1;
	getline(cin, s1);
	suffle(s1);
}