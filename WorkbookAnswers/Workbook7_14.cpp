#include <iostream> 
#include <ctime>
using namespace std;


int linearSearch(const int list[], int key, int arraySize)
{
	long startTime = time(0);
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;

	}
	long endTime = time(0);
	long executionTime = endTime - startTime;
	cout << "Time is " << executionTime << endl;
	return -1;
}

int binarySearch(const int list[], int key, int listSize)
{
	long startTime = time(0);
	int low = 0;
	int high = listSize - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;
	}
	long endTime = time(0);
	long executionTime = endTime - startTime;
	cout << "Time is " << executionTime << endl;
	return -low - 1;
}

int main()
{
	int list[] = { 1,4,2,5,-3,6,2 };
	int list2[] = { 2, 56, 4, 11, -4, 3 };

	cout << "linearSearch is " << linearSearch(list, 4, 8) << endl;
	cout << "binarySearch is " << binarySearch(list, 4, 6) << endl;
	return 0;
}