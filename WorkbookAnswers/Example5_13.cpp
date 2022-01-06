#include <iostream> 
#include <string>
using namespace std;

int main()
{
	//10진수 정수를 입력
	cout << "Enter a decimal number: ";
	int decimal;
	cin >> decimal;
	//10진수를 16진수로 변환
	string hex = "";

	while (decimal != 0)
	{
		int hexValue = decimal % 16;

		//10진수값을 16진수 숫자로 변환
		char hexChar = (hexValue <= 9 && hexValue >= 0) ? static_cast <char>(hexValue + '0') : static_cast<char>(hexValue - 10 + 'A');

		hex = hexChar + hex;
		decimal = decimal / 16;
	}
	cout << "The hex number is " << hex << endl;

	return 0;
}