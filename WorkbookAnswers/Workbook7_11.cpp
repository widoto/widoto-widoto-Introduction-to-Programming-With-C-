#include <iostream>
#include <cmath>
using namespace std;

double mean(const double x[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += x[i];
	}
	return sum / size;
}

double deviation(const double x[], int size)
{
	double nmean = mean(x, 10);
	double sum = 0;
	double n;
	for (int j = 0; j < 10; j++)
	{
		n = (x[j] - nmean)*(x[j] - nmean);
		sum += n;

	}

	sum = sum / 9;
	return sqrt(sum);
}

int main()
{
	cout << "Enter ten numbers: ";
	double number[10];
	for (int i = 0; i < 10; i++)
		cin >> number[i];

	cout << "The mean is " << mean(number, 10) << endl;
	cout << "The standard deniation is " << deviation(number, 10);

}