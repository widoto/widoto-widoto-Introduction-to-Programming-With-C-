#include <iostream>
#include <algorithm>
using namespace std;

class MyPoint {

public:
	int x;
	int y;

	MyPoint()
	{
		x = 0;
		y = 0;
	}

	MyPoint(int nX, int nY)
	{
		x = nX;
		y = nY;
	}

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}

	double distance(MyPoint point)
	{
		return sqrt((x - point.x)*(x - point.x) + (y - point.y)*(y - point.y));
	}


};

int main()
{
	MyPoint p1;
	MyPoint p2(10, 30.5);

	cout << p1.distance(p2) << endl;
}