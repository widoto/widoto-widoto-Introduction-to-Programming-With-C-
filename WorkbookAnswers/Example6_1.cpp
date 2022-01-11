#include <iostream> 
using namespace std;


int max(int x, int y)
{
	int result;
	if (x > y)
		result = x;
	else
		result = y;

	return result;
}

int main()

{
	int i = 5;
	int j = 2;
	int k = max(i, j);
	cout << "The maximum between " << i << " and " << j << " is " << k;

	return 0;
}