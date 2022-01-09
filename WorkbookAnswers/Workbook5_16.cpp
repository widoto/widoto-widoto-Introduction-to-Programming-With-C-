#include <iostream> 
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	cout << "Enter the numbers: ";
	int num1, num2;
	cin >> num1 >> num2;

	int d = min(num1, num2);
	for (d; d >= 1; d--)
	{
		if ((num1%d == 0) && (num2%d == 0))
		{
			int answer = d;
			break;
		}
	}

	cout << "최대 공약수는 " << d << " 입니다.";


	return 0;
}