#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;

	cout << "Enter two integers: ";
	cin >> a >> b;

	if (a % b == a)
		//������ �ߴµ� �ȳ�������, �� ���� ��������� ������!
		cout << a << "is not divisible by " << b;
	else
		cout << a << " is divisible by " << b;

	return 0;
}