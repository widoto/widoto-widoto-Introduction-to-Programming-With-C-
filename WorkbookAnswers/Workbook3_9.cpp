#include <iostream>
#include <string>//���ʿ��� �ڵ�� ������ ����!!!!!!!!1
using namespace std;

int main()
{
	//�ش� �⵵���� ��ĥ�ΰ���?
	//�ٽ�: �� 2���� ���⿡ ���� �ϼ��� �޶�����!!
	int days;
	cout << "Enter the year: ";
	int year;
	cin >> year;
	cout << "Enter the month: ";
	int month;
	cin >> month;

	if (1 <= month && month <= 12)
		//���ε��� ����� �Ѵ�!
	{
		switch (month)
		{
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				days = 29;
			else days = 28;
			break; //�Ƚ��ָ� ���ѷ��� ����...

		case 4:
		case 6:
		case 11:
			days = 30;
			break;

		default:
			days = 31;
			break;

		}
		cout << "���� �ϼ��� " << days << "�Դϴ�.";

	}

	else
		cout << "�ٽ� �Է��� �ּ���.";
	return 0;
}