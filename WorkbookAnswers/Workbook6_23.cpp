#include <iostream> 
#include <ctime>
#include<iomanip>
#include<string>
#include<cstdlib>

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
			string s1 = to_string(n);
			reverse(s1.begin(), s1.end());
			int newnumber = atoi(s1.c_str());
			int count4 = 0;
			for (int i = 1; i <= newnumber; i++)
			{
				if (newnumber%i == 0)
					count4 += 1;
			}

			if (count4 == 2)
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
			{
				n += 1;
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