#include <iostream> 
#include <string>

using namespace std;

string format(int number, int width)
{
	string s1 = to_string(number);
	if (s1.length() >= width)
	{
		return s1;
	}

	else
	{
		string s2 = s1;
		for (int i = 0; i < (width - s1.length()); i++)

			s2 = '0' + s2;

		return s2;
	}
}


int main()
{
	cout << format(34, 7);

}