#include <iostream> 
#include <ctime>
#include<iomanip>

using namespace std;

void rolling(int first, int twice)
{
	bool flag = true;
	int point = 0;
	while (flag)
	{

		if (first + twice == 2 || first + twice == 3 || first + twice == 12)
		{
			cout << "You rolled " << first + twice << endl;
			cout << "You lose";
			flag = false;
		}

		else if (first + twice == 7 || first + twice == 10)
		{
			cout << "You rolled " << first + twice << endl;
			cout << "You win";
			flag = false;
		}

		else if (point == 0)
		{
			cout << "You rolled " << first + twice << endl;
			cout << "Point is " << first + twice << endl;
			point = first + twice;
		}

		else
		{
			if (first + twice == point)
			{
				cout << "You rolled " << first + twice << endl;
				cout << "You win";
				flag = false;
			}
		}

		srand(time(0));
		int first = rand() % 6;
		int twice = rand() % 6;

	}

}

int main()
{

	srand(time(0));
	int first = rand() % 6;
	int twice = rand() % 6;

	rolling(first, twice);

}