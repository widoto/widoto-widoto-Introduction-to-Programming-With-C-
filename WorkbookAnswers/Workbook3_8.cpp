#include <iostream>
#include <string>
using namespace std;

int main()
{
	//�ݾ����Է�
	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remainingAmount = static_cast<int>(amount * 100);
	//1�޷��� �������
	int numberOfOneDollars = remainingAmount / 100;

	remainingAmount = remainingAmount % 100;

	if (numberOfOneDollars == 1 && remainingAmount == 1)
		cout << " 1 dollar and 1penny";
	else if (numberOfOneDollars != 1 && remainingAmount == 1)
		cout << numberOfOneDollars << "dollars and 1 penny";

	else if (numberOfOneDollars == 1 && remainingAmount != 1)

		cout << "1 dollar and " << remainingAmount << "pennies";
	//�� �Ѵ� 0�޷��� ���� ���� ������ �Ѵ�.
	else
		cout << numberOfOneDollars << " dollars and " << remainingAmount << "pennies";

	return 0;
}