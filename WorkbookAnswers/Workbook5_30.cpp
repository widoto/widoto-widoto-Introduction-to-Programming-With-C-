#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	cout << "연도를 입력하시오: ";
	int year;
	cin >> year;

	cout << "1월 1일은 몇 요일입니까?: ";
	int day;
	cin >> day;
	int sum = 0;
	for (int i = 1; i <= 12; i++)
	{
		if (i == 1)
		{
			cout << "1월의 첫번째 날은 " << (day) % 7 << "입니다" << endl;
			sum += day + 31;
		}
		else if (i == 2)
		{
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				cout << "2월의 첫번째 날은 " << (sum) % 7 << "입니다" << endl;
				sum += 29;
			}

			else
			{
				cout << "2월의 첫번째 날은 " << (sum) % 7 << "입니다" << endl;
				sum += 28;
			}

		}

		else if ((i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12))
		{
			cout << i << "월의 첫번째 날은 " << (sum) % 7 << "입니다" << endl;
			sum += 31;
		}

		else
		{
			cout << i << "월의 첫번째 날은 " << (sum) % 7 << "입니다" << endl;
			sum += 30;
		}

	}


	return 0;

}