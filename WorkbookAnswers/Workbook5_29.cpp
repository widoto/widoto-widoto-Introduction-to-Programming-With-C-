#include <iostream> 
#include <cctype>
#include <iomanip>
using namespace std;


int main()
{

	double answers = 1;
	int i = 1;
	int bunmo = 1;
	double bun = 1.0 / bunmo;

	while (i != 11)
	{
		bunmo *= i;
		bun = 1.0 / bunmo;
		answers += bun;
		i += 1;

	}

	cout << "답은 " << answers << " 입니다.";

}