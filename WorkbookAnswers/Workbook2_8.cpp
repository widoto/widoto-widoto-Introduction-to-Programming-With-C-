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
	#�������� �޾Ҵµ� ���̳ʽ������̴ϱ�ٽ� ���ϱⰡ ����....
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
//�������� �����ȵ��.....
//��
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