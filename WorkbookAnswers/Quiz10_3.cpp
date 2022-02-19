#include <iostream> 
#include <string>
using namespace std;

int main()
{
	string s1("I have a dream");
	string s2("ComputerProgramming");
	char s3[] = "ABCDEFGHIJKLMN";

	s1.clear();
	cout << s1.copy(s3, 5, 2) << endl;
	cout << s1.compare(s2) << endl;

}