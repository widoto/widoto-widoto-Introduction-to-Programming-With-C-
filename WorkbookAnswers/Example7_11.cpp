#include <iostream> 
using namespace std;



void selectionSort(int list[], int num)
{
	for (int i = 0; i < num; i++)
	{
		int min = list[i];
		int min_j = i;
		for (int j = i; j < num; j++)
		{
			if (min > list[j])
			{
				min = list[j];
				min_j = j;
			}

		}

		list[min_j] = list[i];
		list[i] = min;

	}

	for (int i = 0; i < num; i++)
		cout << list[i];
}
int main()
{
	int list[] = { 1,4,5,7,9,23,4,5 };
	selectionSort(list, 8);

}