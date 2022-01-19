#include <iostream>
using namespace std;


int main()
{
	cout << "Enter the integers between 1 and 100: ";
	int num[100];
	//일단 모두 false로 통일
	for (int i = 0; i < 100; i++)
	{
		num[i] = 0;
	}
	int number;
	for (int j = 0; j < 100; j++)
	{
		cin >> number;
		if (number != 0)
		{
			num[number] += 1;
		}
		else
			break;

	}
	for (int z = 0; z < 100; z++)
	{
		if (num[z] != 0)
		{
			if (num[z] == 1)
				cout << z << " occurs " << num[z] << " time" << endl;
			else
				cout << z << " occurs " << num[z] << " times" << endl;
		}
	}



}