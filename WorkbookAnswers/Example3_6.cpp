#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//�������� �˾ƺ����� �սô�.
	cout << "Enter a Year: ";
	int year;
	cin >> year;

	//�Է��� ������ �������� �˻�
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	//��� ȭ�� ���
	if (isLeapYear)
		cout << year << " is a leap year" << endl;
	else
		cout << year << " is a not leap year" << endl;

	return 0;
}