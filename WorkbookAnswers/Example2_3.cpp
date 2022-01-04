#include <iostream>
using namespace std;

int main()
{
	//사용자가 3개의 수를 입력하도록 함
	double number1, number2, number3;

	cout << "Enter three numbers: ";
	cin >> number1 >> number2 >> number3;

	//평균 계산
	double average = (number1 + number2 + number3) / 3;

	//평균 출력
	cout << "The average of " << number1 << " " << number2 << " " << number3 << " is " << average << endl;

	return 0;

}