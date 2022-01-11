#include <iostream> 
using namespace std;

void p(int& i)
{
	cout << i << endl;
}


void p(int j)
{
	cout << j << endl;
}

int main()
{
	int k = 5;
	p(k);

	return 0;
}