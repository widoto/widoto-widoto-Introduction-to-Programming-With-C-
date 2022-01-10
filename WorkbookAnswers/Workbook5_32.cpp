#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	cout << "저축하는 금액은 얼마입니까? : ";
	int money;
	cin >> money;
	cout << "연이자율은 얼마입니까? : ";
	double yija;
	cin >> yija;
	cout << "몇년동안 묵혀두실겁니까? : ";
	int year;
	cin >> year;
	double monthlyYija = yija / 100 / 12;
	double sum = money * (1 + monthlyYija);
	cout << sum << endl;
	for (int i = 2; i <= year; i++)
	{
		sum = (sum + money)*(1 + monthlyYija);
		cout << sum << endl;
	}

	cout << year << "후의 돈은 " << sum << "입니다.";
	return 0;

}