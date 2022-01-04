#include <iostream>
#include <ctime>
using namespace std;



int main()
{
	//1970년 1월 1일 자정 이후의 초 값 계산
	int totalSeconds = time(0);

	//현재시간의 초값 계산
	int currentSecond = totalSeconds % 60;

	//전체 분값 계산
	int totalMinutes = totalSeconds / 60;

	//현재 분값 계산
	int currentMinute = totalMinutes % 60;

	//전체 시간 값계산
	int totalHours = totalMinutes / 60;

	//현재 시간 계산
	int currentHour = totalHours % 24 + 9;

	//전체 days 값 계산
	int totalDays = totalHours / 24;

	//현재 days값계산

	int currentDay = totalDays % 365;
	//프로그램을 간단히 하기 위해 1년은 365일이라고 가정한다!!!!!!!!!!!!!!
		//전체 년도 계산

	int totalYears = totalDays / 365 + 1970;


	//결과 확인 출력
	cout << "Current time is " << totalYears << ":" << currentDay << ":" << currentHour << ":" << currentMinute << ":" << currentSecond << " GMT" << endl;

	return 0;
}