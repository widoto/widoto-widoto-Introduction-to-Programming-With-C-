#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;



int main()
{
	//첫번째 문제: KST로 시간 출력하기
	//1970년 1월1일 자정이후의 초 값 계산
	cout << "Enter the time zone offset to GMT: ";
	int timesu;
	cin >> timesu;
	int totalSeconds = time(0) + timesu * 60 * 60;
	//현재 시간의 초 값 계산
	int currentSecond = totalSeconds % 60;
	//전체 분 값 계산
	int totalMinutes = totalSeconds / 60;
	//현재 분 값 계산
	int currentMinute = totalMinutes % 60;
	//전체 시간 값 계산
	int totalHours = totalMinutes / 60;
	//현재 사간 계산
	int currentHour = (totalHours) % 24;
	//totalHours/24로 totalDays를 구할 수 있다.
	//결과화면 출력

	if (0 <= currentHour && currentHour <= 12)
		cout << "Current time is " << currentHour << ": " << currentMinute << ": " << currentSecond << "AM" << endl;

	else
		cout << "Current time is " << currentHour << ": " << currentMinute << ": " << currentSecond << "PM" << endl;

}