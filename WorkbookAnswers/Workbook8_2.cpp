#include <iostream> 
#include <string>
#include <ctime>
using namespace std;

const int SIZE = 4;
double sumMajorDigonal(const double m[][SIZE])
{
	double sum = 0;
	for (int i = 0; i < 4; i++)
		sum += m[i][i];
	return sum;
}

int main()
{
	cout << "Enter a 4-by-4 matrix rowby row: " << endl;
	double matrix[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> matrix[i][j];

	cout << "Sum of the elements in the major diagonal is " << sumMajorDigonal(matrix);


}