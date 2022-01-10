#include <iostream> 
#include <iomanip>
#include <ctime>
using namespace std;


int main()
{
	int count = 0;
	for (int i = 1; i <= 7; i++)
		for (int j = i + 1; j <= 7; j++)
		{
			cout << i << "," << j << endl;
			count += 1;

		}
	cout << count;
}