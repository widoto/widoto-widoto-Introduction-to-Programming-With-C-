#include <iostream> 
#include <cctype>
#include <iomanip>
using namespace std;


int main()
{
	int first = 97;
	double second = 99;

	double answer = 1;
	while ((first != -1) && (second != 1))
	{
		double bun = first / second;
		answer *= bun;
		first -= 2;
		second -= 2;

	}

	cout << "답은 " << answer << " 입니다.";
	cout << "참고로 99분의 1은 " << 1.0 / 99 << " 입니다.";


}