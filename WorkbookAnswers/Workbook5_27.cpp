#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	double answer = 0;
	for (int i = 10000; i >= 2; i--)
	{
		double bunsu = pow(-1, i + 1) / (2 * i - 1);
		answer += bunsu;

	}

	cout << "파이는 " << 4 * (answer + 1) << " 입니다.";


}