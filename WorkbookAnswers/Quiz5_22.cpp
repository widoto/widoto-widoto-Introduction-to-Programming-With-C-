#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	for (int i = 1; i < 5; i++)
	{
		int j = 0;
		while (j < i) {
			cout << j << " ";
			j++;
		}
	}


	cout << "-------------";

	int z = 0;
	while (z < 5) {
		for (int j = z; j > 1; j--)
			cout << j << " ";
		cout << "****" << endl;
		z++;
	}
	//3¹øÂ°
	int i = 5;
	while (i >= 1)
	{
		int num = 1;
		for (int j = 1; j <= i; j++)
		{
			cout << num << "xxx";
			num *= 2;

		}
		cout << endl;
		i--;
	}

	cout << "=========================" << endl;

	int z = 1;
	do {
		int num = 1;
		for (int j = 1; j <= z; j++)
		{
			cout << num << "G";
			num += 2;

		}
		cout << endl;
		i++;
	} while (i <= 5);
	return 0;


	return 0;

}