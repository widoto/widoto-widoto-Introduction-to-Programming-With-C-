#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	//1. 두 임의의 일의 자리 정수 발생
	srand(time(0));
	int number1 = rand() % 100;

	cout << "Guess a magic number between 0 and 100" << endl;
	cout << "Enter your guess: ";
	int number2;
	cin >> number2;

	while (number1 != number2)
	{

		if (number1 > number2) {
			cout << "Your number is too low!" << endl;
		}

		else
			cout << "Your number is too high!" << endl;


		cout << "Enter your guess: ";
		cin >> number2;
	}

	cout << "Yes, the number is " << number1;

	return 0;
}