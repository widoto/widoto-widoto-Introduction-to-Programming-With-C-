#include <iostream>
using namespace std;

bool search(int i, int num[], int number)
{
	for (int z = 0; z < i; z++)
		if (number%num[z] == 0)
			return false;
	return true;
}
int main()
{
	int count = 1;
	int number = 3;
	int num[50];
	num[0] = 2;
	int i = 1;
	while (count != 51)
	{
		if (search(i, num, number))
		{
			num[i] = number;
			i += 1;
			number += 1;
			count += 1;
		}
		else
			number += 1;
	}

	for (int j = 0; j < 50; j++)
		cout << num[j] << " ";

}