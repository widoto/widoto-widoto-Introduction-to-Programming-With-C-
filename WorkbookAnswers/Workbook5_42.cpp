#include <iostream> 
#include <iomanip>
#include <ctime>
using namespace std;


int main()
{
	cout << "Enter the number of seconds : ";
	int seconds;
	cin >> seconds;
	for (int i = seconds - 1; i >= 1; i--)
		cout << i << "seconds remaining" << endl;

	cout << "Stopped";

	return 0;

}