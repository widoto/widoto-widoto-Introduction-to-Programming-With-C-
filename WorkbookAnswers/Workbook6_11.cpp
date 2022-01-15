#include <iostream> 
#include <ctime>
#include <iomanip>
using namespace std;

void printChars(char ch1, char ch2, int numberPerLine)
{
	int count = 1;
	srand(time(0));
	int ccount = 0;

	while (numberPerLine != count)
	{
		int my = rand() % 15 + 108;
		cout << setw(3) << static_cast<char>(my);
		count += 1;
	}



}
int main() {

	printChars('l', 'z', 10);
	return 0;

}