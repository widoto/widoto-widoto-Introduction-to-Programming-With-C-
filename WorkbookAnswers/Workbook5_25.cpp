#include <iostream> 
#include <cctype>
#include <iomanip>
using namespace std;


int main()
{
	cout << "���� ���� ���������� ���鼭 ���ϸ�: ";
	double sum1 = 0;
	double sum2 = 0;
	for (int i = 1; i <= 5000; i++)
	{
		sum1 += (1.0 / i);
	}
	cout << setprecision(20) << sum1 << " �̰�, ������ ���� �������� ���鼭 ���ϸ� " << endl;
	for (int i = 5000; i >= 1; i--)
	{
		sum2 += (1.0 / i);
	}
	cout << setprecision(20) << sum2 << " �̴�.";
	return 0;
}