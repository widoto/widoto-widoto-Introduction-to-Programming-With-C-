#include <iostream> 
#include <string>
using namespace std;

int main()
{
	//10���� ������ �Է�
	cout << "Enter a decimal number: ";
	int decimal;
	cin >> decimal;
	//10������ 16������ ��ȯ
	string hex = "";

	while (decimal != 0)
	{
		int hexValue = decimal % 16;

		//10�������� 16���� ���ڷ� ��ȯ
		char hexChar = (hexValue <= 9 && hexValue >= 0) ? static_cast <char>(hexValue + '0') : static_cast<char>(hexValue - 10 + 'A');

		hex = hexChar + hex;
		decimal = decimal / 16;
	}
	cout << "The hex number is " << hex << endl;

	return 0;
}