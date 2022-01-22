#include <iostream> 
#include <string>
using namespace std;

void search(double c[][4])
{
	int number0 = 0;
	int number1 = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (c[i][j] == 0)
				number0 += 1;
			else
				number1 += 1;
		}

		if (number0 == 4)
			cout << "All 0's on row " << i << endl;
		else if (number1 == 4)
			cout << "All 1's on row " << i << endl;

		number0 = 0;
		number1 = 0;

	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (c[j][i] == 0)
				number0 += 1;
			else
				number1 += 1;
		}

		if (number0 == 4)
			cout << "All 0's on column " << i << endl;
		else if (number1 == 4)
			cout << "All 1's on column " << i << endl;


		number0 = 0;
		number1 = 0;

	}

	for (int i = 0; i < 4; i++)
	{
		if (c[i][i] == 0)
			number0 += 1;
		else
			number1 += 1;
	}

	if (number0 == 4)
		cout << "All 0's on diagonal " << endl;
	else if (number1 == 4)
		cout << "All 1's on diagonal " << endl;
	else
		cout << "No same numbers on the major diagonal" << endl;

	number0 = 0;
	number1 = 0;

	for (int i = 0; i < 4; i++)
	{
		if (c[i][3 - i] == 0)
			number0 += 1;
		else
			number1 += 1;
	}

	if (number0 == 4)
		cout << "All 0's on sub_diagonal " << endl;
	else if (number1 == 4)
		cout << "All 1's on sub_diagonal " << endl;
	else
		cout << "No same numbers on the major sub_diagonal" << endl;


}
int main()
{
	cout << "Enter matrix: " << endl;
	double matrix[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> matrix[i][j];


	search(matrix);

}