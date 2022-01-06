#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	//sum 초기화
	double sum = 0;

	//sum에 0.01,0.02,0.03.....0.99,1 더하기
	for (double i = 0.01; i <= 1.0; i = i + 0.01)
	{
		sum += i;
	}

	//결과 출력
	cout << "The sum is " << sum << endl;

	return 0;

}