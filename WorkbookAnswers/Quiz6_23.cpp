#include <iostream> 
using namespace std;

void minMax(double a, double b, double& min, double& max)
{
	if (a < b)
	{
		min = a;
		max = b;
	}
	else
	{
		min = b;
		max = a;
	}
}

int main()
{
	double a = 5, b = 6, min = 0, max = 0;
	minMax(a, b, min, max);
	cout << "min is " << min << "and max is " << max << endl;
	return 0;
}