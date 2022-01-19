#include <iostream> 
using namespace std;



void selectionSort(int list[], int num)
{
	for (int i = 0; i < num; i++)
	{
		int max = list[i];
		int max_j = i;
		for (int j = i; j < num; j++)
		{
			if (max < list[j])
			{
				max = list[j];
				max_j = j;
			}

		}

		list[max_j] = list[i];
		list[i] = max;

	}

	for (int i = 0; i < num; i++)
		cout << list[i];
}
int main()
{
	int list[] = { 1,4,5,7,9,23,4,5 };
	selectionSort(list, 8);

}