#include <iostream>
using namespace std;

class LinearEquation {
private:
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

public:
	LinearEquation(int nA, int nB, int nC, int nD, int nE, int nF)
	{
		a = nA;
		b = nB;
		c = nC;
		d = nD;
		e = nE;
		f = nF;
	}

	int getA()
	{
		return a;
	}

	int getB()
	{
		return b;
	}

	int getC()
	{
		return c;
	}

	int getD()
	{
		return d;
	}

	int getE()
	{
		return d;
	}

	int getF()
	{
		return f;
	}

	bool isSolvable()
	{
		if (a*d - b * c != 0)
			return true;
		else
			return false;
	}

	double getX()
	{
		return (e*d - b * f) / (a*d - b * c);
	}

	double getY()
	{
		return (a*f - e * c) / (a*d - b * c);
	}
};

int main()
{
	LinearEquation le(3, 4, 5, 6, 7, 8);
	if (le.isSolvable())
		cout << le.getX() << " and " << le.getY() << endl;
	else
		cout << "The equation has no solution" << endl;
}