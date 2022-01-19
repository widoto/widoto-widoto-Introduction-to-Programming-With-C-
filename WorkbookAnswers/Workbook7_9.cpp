#include <iostream>
using namespace std;

double min(double array[], int size)
{
	double small = array[0];
	for (int i = 0; i < size; i++)
		if (small > array[i])
			small = array[i];

	return small;

}
int main()
{
	cout << "Enter ten numbers: ";
	double arr[10];
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	cout << "The minimum number is " << min(arr, 10);