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
		//나눌라 했는데 안나눠지면, 즉 몫이 만들어지지 않으면!
		cout << a << "is not divisible by " << b;
	else
		cout << a << " is divisible by " << b;

	return 0;
}