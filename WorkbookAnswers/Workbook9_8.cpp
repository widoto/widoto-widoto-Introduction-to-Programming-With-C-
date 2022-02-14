#include <iostream>
#include <ctime>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
	int chong;
public:
	Date()
	{
		year = time(0) / 60 / 60 / 24 / 365 + 1970;
		month = time(0) / 60 / 60 / 24 % 365 / 31 + 1;
		day = time(0) / 60 / 60 / 24 % 365 % 31 + 1;
		chong = time(0);
	}

	Date(int nYear, int nMonth, int nDay)
	{
		year = nYear;
		month = nMonth;
		day = nDay;

	}

	Date(int nChong)
	{
		chong = nChong;
		year = chong / 60 / 60 / 24 / 365 + 1970;
		month = chong / 60 / 60 / 24 % 365 / 31 + 1;
		day = chong / 60 / 60 / 24 % 365 % 31 + 1;

	}


	int getYear()
	{
		return year;
	}

	int getMonth() {
		return month;
	}

	int getDay()
	{
		return day;
	}

	void setDate(int elapseTime)
	{
		year = elapseTime / 60 / 60 / 24 / 365 + 1970;
		month = elapseTime / 60 / 60 / 24 % 365 / 31 + 1;
		day = elapseTime / 60 / 60 / 24 % 365 % 31 + 1;
	}
};


int main()
{
	Date d1;
	cout << " Today is " << d1.getYear() << ", " << d1.getMonth() << ", " << d1.getDay() << endl;
	Date d2(555550);
	cout << " Today is " << d2.getYear() << ", " << d2.getMonth() << ", " << d2.getDay() << endl;
	d2.setDate(561555550);
	cout << " Today is " << d2.getYear() << ", " << d2.getMonth() << ", " << d2.getDay() << endl;
}