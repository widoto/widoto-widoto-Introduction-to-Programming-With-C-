#include <iostream>
#include <string>
using namespace std;

int main()
{
	//금액을입력
	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remainingAmount = static_cast<int>(amount * 100);
	//1달러의 수를계산
	int numberOfOneDollars = remainingAmount / 100;

	remainingAmount = remainingAmount % 100;

	if (numberOfOneDollars == 1 && remainingAmount == 1)
		cout << " 1 dollar and 1penny";
	else if (numberOfOneDollars != 1 && remainingAmount == 1)
		cout << numberOfOneDollars << "dollars and 1 penny";

	else if (numberOfOneDollars == 1 && remainingAmount != 1)

		cout << "1 dollar and " << remainingAmount << "pennies";
	//단 둘다 0달러인 경우는 없는 것으로 한다.
	else
		cout << numberOfOneDollars << " dollars and " << remainingAmount << "pennies";

	return 0;
}