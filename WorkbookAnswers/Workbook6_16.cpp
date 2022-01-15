#include <iostream> 
#include <ctime>
#include<iomanip>

using namespace std;


void printMatrix(int n)
{
	int count = 0;
	srand(time(0));

	while (n != count)
	{
		//여기다 srand두면 안됨
		for (int j = 0; j < n; j++)
		{
			//여기다 srand두면 안됨
			cout << rand() % 3 << " ";
		}
		cout << endl;
		count += 1;
	}

}

int main()
{
	cout << "Enter n: ";
	int n;
	cin >> n;
	printMatrix(n);
}