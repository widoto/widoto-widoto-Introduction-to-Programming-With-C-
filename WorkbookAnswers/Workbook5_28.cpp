#include <iostream> 
#include <cctype>
#include <iomanip>
using namespace std;

int perlin(int x) {

	int answer = 1;
	for (int i = x; i >= 1; i--)
	{
		answer *= i;
	}

	return answer;
}

int main()
{

	double answers = 0;
	int i = 10;
	while (i != 0)
	{
		double bun = 1.0 / perlin(i);
		answers += bun;
		i -= 1;
	}

	cout << "답은 " << answers + 1 << " 입니다.";

}