#include <iostream> 
#include <string>
using namespace std;


int main()
{
	//문자열 입력
	cout << "Enter a string: ";
	string s;
	getline(cin, s);

	//문자열의첫번째 문자인덱스
	int low = 0;

	//문자열의마지막문자인덱스
	int high = s.length() - 1;

	bool isPalindrome = true;
	while (low < high)
	{
		if (s[low] != s[high])
		{
			isPalindrome = false;
			break;
		}
		low++;
		high--;
	}
	if (isPalindrome)
		cout << s << " is a palindrome" << endl;
	else
		cout << s << " is not a palindrome" << endl;
	return 0;
}