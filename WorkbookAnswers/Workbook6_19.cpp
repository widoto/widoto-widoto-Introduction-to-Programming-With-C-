#include <iostream> 
#include <ctime>
#include<iomanip>

using namespace std;

void twinPrime(int i)
{
	while (i != 999)
	{
		cout << "(" << i << ", " << i + 2 << ")" << endl;
		i += 2;
	}
}

int main()
{
	twinPrime(1);
}