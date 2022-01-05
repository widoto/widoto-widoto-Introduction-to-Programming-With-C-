#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//1.두 임의의 일의 자리 정수 발생
	srand(time(0));
	int number1 = rand() % 100;
	int number2 = rand() % 100;
	int number3 = rand() % 100;
	//이렇게 표현하는 거 중요 시간은 다섯자리까지 있으니...

		//3.학생에게 "what is number1-number2?의 답을 입력하도록 요청
	cout << "What is " << number1 << " + " << number2 << " + " << number3 << "? ";
	int answer;
	cin >> answer;

	//4. 답을 확인하고 결과를 화면에 출력
	if (number1 + number2 + number3 == answer)
		cout << "You are correct!";
	else
		cout << "Your answer is wrong." << number1 << " + " << number2 << " + " << number3 << " should be " << (number1 + number2 + number3) << endl;

	return 0;
}