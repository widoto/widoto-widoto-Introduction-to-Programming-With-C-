#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;



int main()
{
	//ù��° ����: KST�� �ð� ����ϱ�
	//1970�� 1��1�� ���������� �� �� ���
	cout << "Enter the time zone offset to GMT: ";
	int timesu;
	cin >> timesu;
	int totalSeconds = time(0) + timesu * 60 * 60;
	//���� �ð��� �� �� ���
	int currentSecond = totalSeconds % 60;
	//��ü �� �� ���
	int totalMinutes = totalSeconds / 60;
	//���� �� �� ���
	int currentMinute = totalMinutes % 60;
	//��ü �ð� �� ���
	int totalHours = totalMinutes / 60;
	//���� �簣 ���
	int currentHour = (totalHours) % 24;
	//totalHours/24�� totalDays�� ���� �� �ִ�.
	//���ȭ�� ���

	if (0 <= currentHour && currentHour <= 12)
		cout << "Current time is " << currentHour << ": " << currentMinute << ": " << currentSecond << "AM" << endl;

	else
		cout << "Current time is " << currentHour << ": " << currentMinute << ": " << currentSecond << "PM" << endl;

}