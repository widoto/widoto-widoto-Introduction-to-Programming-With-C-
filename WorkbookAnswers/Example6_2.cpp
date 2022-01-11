#include <iostream> 
using namespace std;


void printGrade(double score)
{
	if (score >= 90.0)
		cout << 'A' << endl;
	else if (score >= 80.0)
		cout << 'B' << endl;
	else if (score >= 70.0)
		cout << 'C' << endl;
	else if (score >= 60.0)
		cout << 'D' << endl;
	else
		cout << 'F' << endl;

}

int main()

{
	cout << "Enter the score: ";
	double score;
	cin >> score;

	cout << "The score is "; printGrade(score);

	return 0;
}