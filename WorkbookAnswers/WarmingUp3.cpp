#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

	cout << "�Է�";
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	if (num2 > num3)
	{
		int temp = num2;
		num2 = num3;
		num3 = temp;
	}

	if (num1 > num3)
	{
		int temp = num1;
		num1 = num3;
		num3 = temp;
	}
	cout << num1 << num2 << num3;
}