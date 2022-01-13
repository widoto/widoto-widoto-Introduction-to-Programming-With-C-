#include <iostream> 
#include <cmath>
#include <string>
using namespace std;

int reverse(int number) {
	string s1 = to_string(number);
	int jari = s1.length();
	int sum = 0;
	for (int i = s1.length() - 1; i >= 0; i--)
	{
		sum += (s1[i] - '0') * pow(10, jari - 1);
		jari -= 1;

	}

	return sum;

}

bool isPalindrom(int number)
{
	if (number == reverse(number))
		return true;
	else
		return false;
}

int main() {
	cout << "Enter the number: ";
	int num;
	cin >> num;
	cout << reverse(num);
	if (isPalindrom(num))
		cout << "회문입니다";
	else
		cout << "회문아닙니다";


}