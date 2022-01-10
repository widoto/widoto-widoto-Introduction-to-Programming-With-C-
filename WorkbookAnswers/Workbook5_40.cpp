#include <iostream> 
#include <iomanip>
#include <ctime>
using namespace std;


int main()
{

	int front = 0;
	int back = 0;
	srand(time(0));
	for (int i = 1; i <= 100000; i++)
	{
		if (rand() % 2 == 1)
			back += 1;
		else
			front += 1;

	}
	cout << "the front is " << front << ", the back is " << back;
	return 0;

}