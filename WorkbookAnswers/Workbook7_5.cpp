#include <iostream>
using namespace std;

bool search(int num[], int number, int count)
{
	for (int i = 0; i < count; i++)
	{
		if (num[i] == number)
			return false;
	}

	return true;
}

int main()
{
	cout << "Enter ten numbers: ";
	int num[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}

	for (int j = 0; j < 10; j++)
	{
		if (search(num, num[j], j))
			cout << num[j] << " ";
	}

}