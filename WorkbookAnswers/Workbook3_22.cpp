#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;



int main()
{
	cout << "Enter x1,y1,x2,y2,x3,y3,x4,y4: ";
	double x1;
	double y1;
	double x2;
	double y2;
	double x3;
	double y3;
	double x4;
	double y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	double test1 = (x3 - x4)*(y1 - y2) - (y3 - y4)*(x1 - x2);


	if (test1 == 0)
		cout << "The intersecting parallel";
	else
		cout << "Thetwo lines are point is in.";
	return 0;
}