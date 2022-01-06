#include <iostream> 
#include <string>
using namespace std;


int main()

{
	string s1 = "Good morning";
	string s2 = "Good afternoon";
	cout << s1[0] << endl;
	cout << (s1 == s2 ? "true" : "false") << endl;
	cout << (s1 != s2 ? "true" : "false") << endl;
	cout << (s1 > s2 ? "true" : "false") << endl;
	cout << (s1 >= s2 ? "true" : "false") << endl;
	cout << (s1 < s2 ? "true" : "false") << endl;
	cout << (s1 <= s2 ? "true" : "false") << endl;

	return 0;
}