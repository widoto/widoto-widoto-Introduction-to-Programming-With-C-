#include <iostream> 
#include <string>
#include <ctime>
using namespace std;

const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex)
{
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += m[i][columnIndex];

	return sum;
}
int main()
{
	cout << "Enter a 3-by-4 matrix rowby row: " << endl;
	double matrix[3][4];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cin >> matrix[i][j];

	for (int z = 0; z < 4; z++)
	{
		cout << "Sum of the elements at column " << z << "is " << sumColumn(matrix, 3, z) << endl;
	}


}