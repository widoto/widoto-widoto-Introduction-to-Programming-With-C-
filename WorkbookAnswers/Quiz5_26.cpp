#include <iostream> 
#include <string>
using namespace std;

int main()
{
	int balance = 1000;
	while (true)
	{
		if (balance > 9)
			break;
		balance = balance - 9;

	}
	cout << "Balance is " << balance << endl;
	cout << "==========================";

	int balence2 = 1000;
	while (true)
	{
		if (balance > 9)
			continue;
		balance = balance - 9;
	}

	cout << "Balance is " << balance << endl;


}