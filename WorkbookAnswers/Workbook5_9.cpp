#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	const int MONEY = 10000;
	int x = 1;
	double chong = MONEY;

	while (x < 11)
	{
		chong = chong * (1.05);
		x += 1;
	}

	cout << "10�� �� ��ϱ��� " << chong << " �Դϴ�." << endl;

	double after4 = 0;

	for (int i = 0; i < 4; i++)
	{
		chong = chong * (1.05);
		after4 += chong;
	}

	cout << "�� �� 4�� ������ ��ϱ��� : " << after4;
}