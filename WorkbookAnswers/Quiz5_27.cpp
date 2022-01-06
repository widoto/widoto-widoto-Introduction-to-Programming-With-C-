#include <iostream> 
#include <string>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		if (i % 3 == 0)
			continue;
		sum += i;
	}

	cout << sum << endl;


	cout << "================" << endl;

	int j = 0;
	int sum2 = 0;
	while (j < 4)
	{
		if (j % 3 == 0)
			continue;
		sum2 += j;
		j++;
	}

	cout << sum2;


}