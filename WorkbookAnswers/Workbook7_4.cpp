#include <iostream>
using namespace std;


int main()
{
	cout << "Enter the integers between 1 and 100: ";
	int num[100];
	double sum = 0;
	int count = 0;
	//일단 모두 false로 통일
	int number;
	for (int i = 0; i < 100; i++)
	{
		num[i] = -1;
	}
	for (int j = 0; j < 100; j++)
	{
		cin >> number;
		if (number >= 0)
		{
			num[j] = number;
			sum += number;
			count += 1;
		}
		else
			break;

	}

	int hcount = 0;
	int lcount = 0;
	int scount = 0;
	double average = sum / count;

	for (int z = 0; z < 100; z++)
	{
		if (num[z] >= 0)
		{
			if (num[z] > average)
				hcount += 1;
			else if (num[z] < average)
				lcount += 1;
			else
				scount += 1;
		}

		else
			break;
	}

	cout << "high count is " << hcount << endl;
	cout << "low count is " << lcount << endl;
	cout << "same count is " << scount << endl;

}