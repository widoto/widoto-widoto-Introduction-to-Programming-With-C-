#include <iostream> 
#include <cctype>
#include <iomanip>
using namespace std;


int main()
{
	cout << "왼쪽 부터 오른쪽으로 가면서 더하면: ";
	double sum1 = 0;
	double sum2 = 0;
	for (int i = 1; i <= 5000; i++)
	{
		sum1 += (1.0 / i);
	}
	cout << setprecision(20) << sum1 << " 이고, 오른쪽 부터 왼쪽으로 가면서 더하면 " << endl;
	for (int i = 5000; i >= 1; i--)
	{
		sum2 += (1.0 / i);
	}
	cout << setprecision(20) << sum2 << " 이다.";
	return 0;
}