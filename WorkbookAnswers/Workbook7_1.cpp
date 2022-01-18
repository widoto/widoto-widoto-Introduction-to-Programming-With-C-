#include <iostream>
using namespace std;


void escore(double score[], int num)
{
	double highestnum = score[0];
	for (int i = 0; i < num; i++)
	{
		if (score[i] > highestnum)
		{
			highestnum = score[i];
		}
	}
	for (int i = 0; i < num; i++)
	{
		if (score[i] >= highestnum - 10)
			cout << "Student " << i << " score is " << score[i] << " and grade is A" << endl;
		else if (score[i] >= highestnum - 20)
			cout << "Student " << i << " score is " << score[i] << " and grade is B" << endl;
		else if (score[i] >= highestnum - 30)
			cout << "Student " << i << " score is " << score[i] << " and grade is C" << endl;
		else if (score[i] >= highestnum - 40)
			cout << "Student " << i << " score is " << score[i] << " and grade is D" << endl;
	}

}

int main()
{
	int snumber;
	cout << "Enter the number of students: ";
	cin >> snumber;
	cout << "Enter " << snumber << " scores: ";
	double score[100];
	for (int i = 0; i < snumber; i++)
	{
		cin >> score[i];
	}

	escore(score, snumber);


}