#include <iostream> 
using namespace std;


int main()

{
	int sum = 0;
	int sum2 = 0;
	for (int i = 0; i < 10; ++i)
	{
		cout << i;
		sum += i;
		cout << i;

	}

	cout << sum;
	cout << "======================";

	for (int j = 0; j < 10; j++)
	{
		cout << j;
		sum2 += j;
		cout << j;
	}


	cout << sum2;

	return 0;
}