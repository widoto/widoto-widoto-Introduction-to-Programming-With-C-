#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	cout << "������ �Է��Ͻÿ�: ";
	int year;
	cin >> year;

	cout << "1�� 1���� �� �����Դϱ�?: ";
	int day;
	cin >> day;
	int sum = 0;
	for (int i = 1; i <= 12; i++)
	{
		if (i == 1)
		{
			cout << "1���� ù��° ���� " << (day) % 7 << "�Դϴ�" << endl;
			sum += day + 31;
		}
		else if (i == 2)
		{
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				cout << "2���� ù��° ���� " << (sum) % 7 << "�Դϴ�" << endl;
				sum += 29;
			}

			else
			{
				cout << "2���� ù��° ���� " << (sum) % 7 << "�Դϴ�" << endl;
				sum += 28;
			}

		}

		else if ((i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12))
		{
			cout << i << "���� ù��° ���� " << (sum) % 7 << "�Դϴ�" << endl;
			sum += 31;
		}

		else
		{
			cout << i << "���� ù��° ���� " << (sum) % 7 << "�Դϴ�" << endl;
			sum += 30;
		}

	}


	return 0;

}