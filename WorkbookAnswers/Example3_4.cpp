#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//1.두 임의의 일의 자리 정수 발생
	srand(time(0));
	int number1 = rand() % 10;
	int number2 = rand() % 10;

	//2.number1 <number2라면 number1과 number2를 교환
	if (number1 < number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}

	//3.학생에게 "what is number1-number2?의 답을 입력하도록 요청
	cout << "What is " << number1 << " - " << number2 << "?";
	int answer;
	cin >> answer;

	//4. 답을 확인하고 결과를 화면에 출력
	if (number1 - number2 == answer)
		cout << "You are correct!";
	else
		cout << "Your answer is wrong." << number1 << " - " << number2 << " should be " << (number1 - number2) << endl;

	return 0;
}