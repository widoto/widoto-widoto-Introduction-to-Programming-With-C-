#include <iostream> 
#include <cmath>
using namespace std;


int main()
{
	cout << "Enter ten numbers: ";
	double num;
	double sum = 0;
	double dsum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		sum += num;
		dsum = dsum + (num * num);
	}

	cout << "The mean is " << sum / 10 << endl;
	double pun = pow((dsum - (sum*sum / 10)) / 9, 0.5);
	cout << "The standard deviation is " << pun;


}