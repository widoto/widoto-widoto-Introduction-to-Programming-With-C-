#include <iostream> 
using namespace std;


int main()
{
	bool locker[100];
	for (int i = 0; i < 100; i++)
		locker[i] = false;

	for (int j = 0; j < 100; j++)
	{
		for (int z = j; z < 100; z += j + 1)
		{
			if (locker[z] == false)
				locker[z] = true;
			else
				locker[z] = false;
		}
	}

	for (int z = 0; z < 100; z++)
	{
		if (locker[z] == true)
			cout << z << " ";
	}


}