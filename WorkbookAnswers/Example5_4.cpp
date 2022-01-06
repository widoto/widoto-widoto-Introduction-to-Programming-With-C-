#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	int correctCount = 0; //옳은답의수를계산
	int count = 0; //질문의 수를 계산
	long startTime = time(0);
	const int NUMBER_OF_QUESTIONS = 5;

	while (count < NUMBER_OF_QUESTIONS) {

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

		if (number1 - number2 == answer) {
			cout << "You are correct!\n";
			correctCount++;

		}
		else
			cout << "Your answer is wrong.\n" << number1 << " - " << number2 << " should be " << (number1 - number2) << endl;
		count++;

	}

	long endTime = time(0);
	long testTime = endTime - startTime;

	cout << "Correct count is " << correctCount << "\nTest time is " << testTime << "Seconds\n";

	return 0;
}