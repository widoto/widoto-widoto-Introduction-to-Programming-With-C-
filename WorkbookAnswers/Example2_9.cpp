#include <iostream>
#include <ctime>
using namespace std;



int main()
{
	//1970�� 1�� 1�� ���� ������ �� �� ���
	int totalSeconds = time(0);

	//����ð��� �ʰ� ���
	int currentSecond = totalSeconds % 60;

	//��ü �а� ���
	int totalMinutes = totalSeconds / 60;

	//���� �а� ���
	int currentMinute = totalMinutes % 60;

	//��ü �ð� �����
	int totalHours = totalMinutes / 60;

	//���� �ð� ���
	int currentHour = totalHours % 24 + 9;

	//��ü days �� ���
	int totalDays = totalHours / 24;

	//���� days�����

	int currentDay = totalDays % 365;
	//���α׷��� ������ �ϱ� ���� 1���� 365���̶�� �����Ѵ�!!!!!!!!!!!!!!
		//��ü �⵵ ���

	int totalYears = totalDays / 365 + 1970;


	//��� Ȯ�� ���
	cout << "Current time is " << totalYears << ":" << currentDay << ":" << currentHour << ":" << currentMinute << ":" << currentSecond << " GMT" << endl;

	return 0;
}