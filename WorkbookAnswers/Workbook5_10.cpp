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

	for (int j = 0; j < number; j++)
	{
		int a = score[j];
		if (max_score < a)
		{
			max_score = a;
			highestName = j;
		}

	}

	cout << "������ ���� ���� �л��� �̸��� " << name[highestName] << "�̰�, �� ������ " << max_score << "�Դϴ�.";
	return 0;
}