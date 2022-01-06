#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	//1. 두 임의의 일의 자리 정수 발생
	srand(time(0));
	int number1 = rand() % 10;
	int number2 = rand() % 10;

	if (number1 < number2) {
		int temp = number1;
		number1 = number2;
		number2 = temp;

	}

	//3.학생에게 "What is number1- number2?"의답을 입력하도록 요청
	cout << "What is " << number1 << " - " << number2 << "? ";
	int answer;
	cin >> answer;

	while (number1 - number2 != answer)
	{
		cout << "Wrongnumber Try again. What is " << number1 << "-" << number2 << " ?";
		cin >> answer;
	}

	cout << "You got it!" << endl;
	return 0;
}