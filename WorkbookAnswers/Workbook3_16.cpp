#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//삼각형의 둘레계산
	int a;
	int b;
	int c;
	cout << "Enter the three length: ";
	cin >> a >> b >> c;

	if (a > b && a > c)
		if (a < b + c)
			cout << a + b + c;
		else
			cout << "유효하지 않습니다.";

	if (b > c && b > a)
		if (b < a + c)
			cout << a + b + c;
		else
			cout << "유효하지 않습니다.";

	if (c > a && c > b)
		if (c < b + a)
			cout << a + b + c;
		else
			cout << "유효하지 않습니다.";

	return 0;
}