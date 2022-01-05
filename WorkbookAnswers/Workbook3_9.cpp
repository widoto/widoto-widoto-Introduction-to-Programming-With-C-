#include <iostream>
#include <string>//불필요한 코드는 감정의 요인!!!!!!!!1
using namespace std;

int main()
{
	//해당 년도달은 며칠인가요?
	//핵심: 단 2월만 윤년에 따라 일수가 달라진다!!
	int days;
	cout << "Enter the year: ";
	int year;
	cin >> year;
	cout << "Enter the month: ";
	int month;
	cin >> month;

	if (1 <= month && month <= 12)
		//따로따로 써줘야 한다!
	{
		switch (month)
		{
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				days = 29;
			else days = 28;
			break; //안써주면 무한루프 돈다...

		case 4:
		case 6:
		case 11:
			days = 30;
			break;

		default:
			days = 31;
			break;

		}
		cout << "달의 일수는 " << days << "입니다.";

	}

	else
		cout << "다시 입력해 주세요.";
	return 0;
}