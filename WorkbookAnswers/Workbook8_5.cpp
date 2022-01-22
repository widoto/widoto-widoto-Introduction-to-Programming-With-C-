#include <iostream> 
#include <string>
using namespace std;

const int N = 3;
void addMatrix(const double a[][N], const double b[][N], double c[][N])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = (a[i][j] + b[i][j]);

		}


	for (int i = 0; i < 3; i++)
	{
		cout << endl; //이거 꼭 필요하당
		for (int j = 0; j < 3; j++)
			cout << c[i][j] << " ";
	}
}

int main()
{
	cout << "Enter matrix1: " << endl;
	double matrix1[3][3];
	double matrix2[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matrix1[i][j];

	cout << "Enter matrix2: " << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matrix2[i][j];

	double matrixSum[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
	addMatrix(matrix1, matrix2, matrixSum);






}