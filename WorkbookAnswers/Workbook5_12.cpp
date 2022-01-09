#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	int count = 0;
	for (int i = 100; i < 1001; i++)
	{
		if (count != 10)
		{
			if (i % 30 == 0)
			{
				cout << i << " ";
				count += 1;
			}



		}

		else
		{
			cout << endl;
			count = 0;
		}

	}


	return 0;
}