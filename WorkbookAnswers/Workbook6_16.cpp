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
		//����� srand�θ� �ȵ�
		for (int j = 0; j < n; j++)
		{
			//����� srand�θ� �ȵ�
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