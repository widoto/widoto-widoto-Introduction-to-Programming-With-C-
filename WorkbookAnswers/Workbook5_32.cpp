#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	cout << "�����ϴ� �ݾ��� ���Դϱ�? : ";
	int money;
	cin >> money;
	cout << "���������� ���Դϱ�? : ";
	double yija;
	cin >> yija;
	cout << "��⵿�� �����νǰ̴ϱ�? : ";
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

	cout << year << "���� ���� " << sum << "�Դϴ�.";
	return 0;

}