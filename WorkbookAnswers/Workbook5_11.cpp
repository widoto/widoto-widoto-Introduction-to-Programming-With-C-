#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	cout << "�л� ���� �Է��Ͻÿ�: ";
	int number = 0;
	cin >> number;

	int highestName;
	int highestName2;

	string name[50];
	int score[50];
	cout << "�̸��� ������ �Է��Ͻÿ�" << endl;
	for (int i = 0; i < number; i++)
	{
		string oneName;
		double scores;
		cin >> oneName >> scores;
		name[i] = oneName;
		score[i] = scores;
	}

	int max_score = 0;
	int max_score2 = 0;

	for (int j = 0; j < number; j++)
	{
		int a = score[j];
		if (max_score < a)
		{
			max_score = a;
			highestName = j;
		}

	}

	for (int z = 0; z < number; z++)
	{
		int aa = score[z];
		if (z == highestName)
			continue;

		if (max_score2 < aa)
		{
			max_score2 = aa;
			highestName2 = z;
		}

	}



	cout << "������ ���� ���� �л��� �̸��� " << name[highestName] << "�̰�, �� ������ " << max_score << "�Դϴ�." << endl;
	cout << "�״��� �л��� �̸��� " << name[highestName2] << "�̰�, �� ������ " << max_score2 << "�Դϴ�.";

	return 0;
}