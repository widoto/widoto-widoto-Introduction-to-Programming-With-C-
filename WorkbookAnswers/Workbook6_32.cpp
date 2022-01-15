#include <iostream> 
#include <ctime>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;

void solveQuadraticEquation(double a, double b, double c, double& discrimenant, double& r1, double& r2)
{
	if (discrimenant < 0)
		cout << "The equation has no roots";
	else if (discrimenant == 0)
		cout << r1;
	else {
		cout << r1 << endl;
		cout << r2;

	}
}

int main()
{

	cout << "Enter the three numbers: ";
	double n1;
	double n2;
	double n3;

	cin >> n1 >> n2 >> n3;

	double discrimenant = n2 * n2 - 4 * n1*n3;
	double r1 = ((-1 * n2 + pow(n2*n2 - 4 * n1*n3, 0.5)) / 2 * n1);
	double r2 = ((-1 * n2 - pow(n2*n2 - 4 * n1*n3, 0.5)) / 2 * n1);
	solveQuadraticEquation(n1, n2, n3, discrimenant, r1, r2);
}