#include <iostream>
using namespace std;

int indexOfSmallestElement(double array[], int size)
{
	double small = array[0];
	int index = 0;
	for (int i = 0; i < size; i++)
		if (small > array[i])
		{
			small = array[i];
			index = i;
		}


	return index;

}
int main()
{
	cout << "Enter ten numbers: ";
	double arr[10];
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	cout << "The minimum index is " << indexOfSmallestElement(arr, 10);

}