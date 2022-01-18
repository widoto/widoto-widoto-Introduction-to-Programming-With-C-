#include <iostream> 
using namespace std;


int binarySearch(const int list[], int key, int listSize)
{
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
	return -low - 1;
}

int main()
{
	int list[] = { 1,4,2,5,-3,6,2 };
	int i = binarySearch(list, 4, 8);
	cout << i;
	return 0;
}