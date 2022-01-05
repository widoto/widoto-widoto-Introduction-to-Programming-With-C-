#include <iostream>
#include <string>
using namespace std;

int main()
{
	int today;
	cout << "Enter today's day: ";
	cin >> today;
	string theday;
	int ohtoday = today % 7;


	switch (ohtoday)
	{
	case 0: theday = "Sunday";
		break;

	case 1: theday = "Monday";
		break;

	case 2: theday = "Tuesday";
		break;

	case 3: theday = "Wednesday";
		break;

	case 4: theday = "Thursday";
		break;

	case 5:  theday = "Friday";
		break;

	case 6: theday = "Saterday";
		break;
	}


	int next_day;
	cout << "Enter the number of days elapsedsince today: ";
	cin >> next_day;

	int term = (next_day + ohtoday) % 7;

	switch (term)
	{
	case 0: cout << "Today is " << theday << " and the future day is Sunday";
		break;

	case 1: cout << "Today is " << theday << " and the future day is Monday";
		break;

	case 2: cout << "Today is " << theday << " and the future day is Thuesday";
		break;

	case 3: cout << "Today is " << theday << " and the future day is Wednesday";
		break;

	case 4: cout << "Today is " << theday << " and the future day is Thursday";
		break;

	case 5: cout << "Today is " << theday << " and the future day is Friday";
		break;

	case 6: cout << "Today is " << theday << " and the future day is Saterday";
		break;
	}

	return 0;
}
//이건 오늘로부터 몇 일이 지났는지고, 두번째 입력값이 n일 일때의 요일을 구하는 건 다른 거지. 이땐 빼야지.