#include <iostream> 
#include <ctime>
#include<iomanip>

using namespace std;

bool leftOfLine(double x0, double y0, double x1, double y1, double x2, double y2)
{
	//방정식 만들어서 선 위에 있으면 true반환, 없으면 false반환
	if (y2 != (y0 - y1 / x0 - x1)*(x2 - x0) + y0)
		return true;
	else
		return false;
}

int main()
{
	cout << "Enter three points for p0,p1, and p2: ";
	double x0, y0, x1, y1, x2, y2;
	cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
	if (leftOfLine && (x2 <= x0 && y2 <= y0) && (y2 >= y1 && x2 >= x1))
	{
		cout << "(" << x2 << ", " << y2 << ") is on the line segment from ~";
	}

	else if (leftOfLine && ((x2 > x0 && y2 > y0) && (x2 < x1 && y2 < y1)))
	{
		cout << "(" << x2 << ", " << y2 << ") is one the same line~";
	}

	else if (!leftOfLine && (y2 > y0 && y2 > y1))
	{
		cout << "(" << x2 << ", " << y2 << ") is 위 line~";
	}

	else
	{
		cout << "(" << x2 << ", " << y2 << ") is 아래 line~";
	}

}