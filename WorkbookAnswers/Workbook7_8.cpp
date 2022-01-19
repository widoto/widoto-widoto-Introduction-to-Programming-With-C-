#include <iostream>
using namespace std;

int average(const int array[], int size);
double average(const double array[], int size);

int main()
{
	double number[10];
	for (int i = 0; i < 10; i++)
		cin >> number[i];

	cout << average(number, 10);


}

int average(const int array[], int size)
{
	double sum = 0;
	for (int i = 0; i < 10; i++)
		sum += array[i];
	return sum / size;
}

double average(const double array[], int size)
{
	double sum = 0;
	for (int i = 0; i < 10; i++)
		sum += array[i];
	return sum / size;
}