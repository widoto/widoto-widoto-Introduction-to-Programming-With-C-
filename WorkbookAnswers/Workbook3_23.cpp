#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;
//�̰͵� ABS ����� �ڴ�. �� �� ������ ������ ��߰ڳ� ABS


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