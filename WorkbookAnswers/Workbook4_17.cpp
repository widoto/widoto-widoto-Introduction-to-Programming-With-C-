#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	cout << "Enter the first 9 digits of an ISBN as integer: ";
	string number;
	getline(cin, number);
	//그니까 int number1 = number[0]; 하면 들어간 숫자대로 인식하지 않고 그숫자의인트값 변환수로 이해하겠네!
	int number1 = number[0] - 48;
	int number2 = number[1] - 48;
	int number3 = number[2] - 48;
	int number4 = number[3] - 48;
	int number5 = number[4] - 48;
	int number6 = number[5] - 48;
	int number7 = number[6] - 48;
	int number8 = number[7] - 48;
	int number9 = number[8] - 48;


	int last_number = (number1 + number2 * 2 + number3 * 3 + number4 * 4 + number5 * 5 + number6 * 6 + number7 * 7 + number8 * 8 + number9 * 9) % 11;
	cout << last_number;
	if (last_number == 10)
	{
		cout << "The ISBN -10 number is " << number << "X";

	}
	else
		cout << "The ISBN -10 number is " << number << last_number;



	return 0;
}