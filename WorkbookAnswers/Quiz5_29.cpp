#include <iostream> 
#include <string>
using namespace std;

int main()
{
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (i*j > 2)
				break;

			cout << i * j << endl;

		}
		cout << i << endl;
	}


	cout << "================" << endl;

	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (i*j > 2)
				continue;

			cout << i * j << endl;
		}
		cout << i << endl;
	}

}