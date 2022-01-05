#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//동전 맞추기게임
	srand(time(0));
	int number1 = rand() % 2;
	int number2;
	cout << "앞면일까, 뒷면일까? 앞면은 0, 뒷면은 1: ";
	cin >> number2;

	//4. 답을 확인하고 결과를 화면에 출력
	if (number1 == number2)
		cout << "You are correct!";
	else
		cout << "땡!";

	return 0;
}