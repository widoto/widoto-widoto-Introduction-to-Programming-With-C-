#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;
//이것도 ABS 써줘야 겠다. 그 점 나오면 무조건 써야겠네 ABS


int main()
{
	cout << "Enter a point's x- and y- coordinates: ";
	double a;
	double b;
	cin >> a >> b;
	if (0 <= a && a <= 200)
	{
		if (-0.5 * a + 100 >= b)
			cout << "The point is in the triangle";

		else
			cout << "The point is not in triangle";
	}

	else
		cout << "The point is not in triangle.";
	return 0;
}