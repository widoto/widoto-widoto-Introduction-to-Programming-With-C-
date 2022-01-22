#include <iostream> 
#include <string>
using namespace std;

const int N = 3;
void multiplyMatrix(const double a[][N], const double b[][N], double c[][N])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			//그러네 이게 하나씩 앞으로 밀려야 되니까책에써있는 숫자로 쓰면 안되네.
			c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
			cout << c[i][j] << " ";
	}

}

int main()
{
	cout << "Enter matrix1: " << endl;
	double matrix1[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matrix1[i][j];

	cout << "Enter matrix2: " << endl;
	double matrix2[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matrix2[i][j];

	double matrix3[3][3];
	cout << "The multiplication of the matrices is " << endl;
	multiplyMatrix(matrix1, matrix2, matrix3);

}