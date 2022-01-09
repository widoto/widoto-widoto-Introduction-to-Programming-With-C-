#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	cout << "학생 수를 입력하시오: ";
	int number = 0;
	cin >> number;

	int highestName;
	string name[50];
	int score[50];
	cout << "이름과 점수를 입력하시오" << endl;
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

	cout << "성적이 가장 높은 학생의 이름은 " << name[highestName] << "이고, 그 성적은 " << max_score << "입니다.";
	return 0;
}