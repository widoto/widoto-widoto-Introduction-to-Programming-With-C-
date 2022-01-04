/*
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int enterhour = 0;
	int totalSeconds = 0;
	cout << "Enter the time zon offset to GMT: ";
	cin >> enterhour;

	if (enterhour < 0)
		totalSeconds = time(0) - enterhour * 60 * 60;
	#음수값을 받았는데 마이너스를붙이니까다시 더하기가 되지....
		if (enterhour > 0)
			totalSeconds = time(0) + enterhour * 60 * 60;
	if (enterhour == 0)
		totalSeconds = time(0);

	int currentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = totalHours % 24;

	cout << "Current time is " << currentHour << ":"
		<< currentMinute << ":" << currentSecond << "GMT" << endl;


	return 0;

}
*/
//음수값이 말을안들어.....
//답
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int enterhour = 0;

	cout << "Enter the time zon offset to GMT: ";
	cin >> enterhour;

	int totalSeconds = time(0) + enterhour * 60 * 60;

	int currentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = totalHours % 24;

	cout << "Current time is " << currentHour << ":"
		<< currentMinute << ":" << currentSecond << "GMT" << endl;


	return 0;

}