#include <iostream> 
#include <ctime>
#include<iomanip>

using namespace std;

void prime(int n)
{
	int count = 0;
	int count3 = 0;
	do {
		int count2 = 0;
		for (int i = 1; i <= n; i++)
		{
			if (n%i == 0)
				count2 += 1;
		}
		if (count2 == 2)
		{

			if (count3 != 10)
			{
				cout << n << " ";
				count += 1;
				n += 1;
				count3 += 1;
			}

			else
			{
				cout << endl;
				cout << n << " ";
				count += 1;
				n += 1;
				count3 = 1;
			}
		}
		else
			n += 1;

	} while (count != 100);
}

int main()
{
	prime(2);

}