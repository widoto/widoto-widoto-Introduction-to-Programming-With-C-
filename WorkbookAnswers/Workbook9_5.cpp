#include <iostream>
#include <time.h>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;

public:
	Time()
	{
		second = time(0) % 60;
		minute = time(0) / 60 % 60;
		hour = time(0) / 60 / 60 % 24;

	}

	Time(int nSecond)
	{
		second = nSecond;
	}

	Time(int nHour, int nMinute, int nSecond)
	{
		hour = nHour;
		minute = nMinute;
		second = nSecond;
	}

	int getHour()
	{
		return hour;
	}

	int getMinute()
	{
		return minute;
	}

	int getSecond()
	{
		return second;
	}

	void setTime(int elapseTime)
	{
		second = elapseTime % 60;
		minute = elapseTime / 60 % 60;
		hour = elapseTime / 60 / 60 % 24;
	}
};


int main()
{
	Time t1;
	Time t2(555550);
	t2.setTime(555550);
	cout << "about t1: " << t1.getHour() << ", " << t1.getMinute() << ", " << t1.getSecond() << endl;
	cout << "about t2: " << t2.getHour() << ", " << t2.getMinute() << ", " << t2.getSecond() << endl;

}