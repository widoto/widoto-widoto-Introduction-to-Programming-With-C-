#include <iostream>
#include <time.h>
using namespace std;

class QuadraticEquation {

private:
	double a;
	double b;
	double c;

public:
	QuadraticEquation(double nA, double nB, double nC)
	{
		a = nA;
		b = nB;
		c = nC;
	}

	double getA()
	{
		return a;
	}

	double getB()
	{
		return b;
	}

	double getC()
	{
		return c;
	}

	double getDiscriminant()
	{
		return b * b - 4 * a*c;
	}

	double getRoot1()
	{
		if (getDiscriminant() >= 0)
			return (-1 * b + sqrt(getDiscriminant())) / (2 * a);
		else
			return 0;
	}

	double getRoot2()
	{
		if (getDiscriminant() >= 0)
			return (-1 * b - sqrt(getDiscriminant())) / (2 * a);
		else
			return 0;
	}


};


int main()
{
	QuadraticEquation q(1, 9, 4);
	if (q.getDiscriminant() > 0)
		cout << "two: " << q.getRoot1() << "," << q.getRoot2() << endl;
	else if (q.getDiscriminant() == 0)
		cout << "one: " << q.getRoot1() << endl;
	else
		cout << "The equation has no real roots" << endl;

}